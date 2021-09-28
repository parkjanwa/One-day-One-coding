using System;
using System.Collections.Generic;
using System.Text;
using System.IO;
using System.Net;
using System.Net.Sockets;
using System.Threading;
using System.Security;
using System.Security.Cryptography;
using System.Xml.Serialization;

namespace ConsoleApp1
{

    public class RsaEncryption
    {
        // csp(암호화 서비스 공급자)가 제공하는 RSA알고리즘의 암호화,복호화를 진행 (클래스)
        private static RSACryptoServiceProvider csp = new RSACryptoServiceProvider(2048);
        // RSA의 표준 매개변수
        // ExportParameters 구조체 형식의 원시 RSA Key를 검색할 수 있게 하는 메서드 노출 (구조체)
        private RSAParameters _privateKey;
        private RSAParameters _publicKey;

        public RsaEncryption()
        {
            _privateKey = csp.ExportParameters(true); //매게변수
            _publicKey = csp.ExportParameters(false);
        }

        public string GetPublicKey()
        {
            var sw = new StringWriter(); //sw에 문자열 입력
            var xs = new XmlSerializer(typeof(RSAParameters)); //XML문서로 직렬화
            xs.Serialize(sw, _publicKey); //입력받은 문자열을 퍼블릭 키로 ? 키랑 같이? 직렬화
            return sw.ToString();//문자열반환
        }

        public string Encrypt(string plainText)
        {
            csp = new RSACryptoServiceProvider(); //생성자
            csp.ImportParameters(_publicKey); //지정된 rsa파라미터 가져오기
            var data = Encoding.Unicode.GetBytes(plainText); //암호화 할수 있게 변환
            var cypher = csp.Encrypt(data, false); //암호화
            return Convert.ToBase64String(cypher); //변환된거 문자열로 재변환
        }

        public string Decrypt(string cypherText)
        {
            var dataBytes = Convert.FromBase64String(cypherText); // 복호화는 from
            csp.ImportParameters(_privateKey); //지정된 파라미터 가져오기
            var plainText = csp.Decrypt(dataBytes, false); // 복호화
            return Encoding.Unicode.GetString(plainText); //바이트를 문자열로 디코딩
        }
    }

    class CtProc
    {
        public TcpClient tcpclt;

        public void ct_proc()
        {
            RsaEncryption rsa = new RsaEncryption();
            NetworkStream sendstrm = tcpclt.GetStream();
            StreamReader recvStrm = new StreamReader(tcpclt.GetStream());

            while (true)
            {

                string tmpStr = recvStrm.ReadLine();
                var plainText = rsa.Decrypt(tmpStr);

                if (tmpStr.IndexOf("QUIT") > -1)
                {
                    Console.WriteLine("종료메시지 수신됨");
                    break;
                }
                Console.WriteLine("수신메시지 :" + plainText);
                plainText += "\r\n";
                byte[] buff = Encoding.UTF8.GetBytes(plainText);

                sendstrm.Write(buff, 0, buff.Length);
            }
            tcpclt.Close();
        }
    }
    class Test_tcpchatServer
    {
        static void Main(string[] arg)
        {
            string hostName = "localhost";
            int portNum = 3000;

            try
            {
                IPHostEntry local = Dns.GetHostEntry(hostName);
                IPAddress locIP = local.AddressList[0];
                IPEndPoint locEnd = new IPEndPoint(locIP, portNum);

                TcpListener tcpListen = new TcpListener(locEnd);

                tcpListen.Start();

                Console.WriteLine("서버 대기중...포트번호 :" + portNum);

                while (true)
                {
                    TcpClient tcpclt2 = tcpListen.AcceptTcpClient();
                    CtProc cproc = new CtProc();
                    cproc.tcpclt = tcpclt2;

                    Thread ct_Thread = new Thread(new ThreadStart(cproc.ct_proc));
                    ct_Thread.Start();
                }
                
            }
            catch (Exception excp)
            {
                Console.WriteLine(excp.ToString());
            }
        }
    }
}
