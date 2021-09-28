using System;
using System.Security;
using System.Security.Cryptography;
using System.Text;
using System.IO;
using System.Xml.Serialization;


namespace test_ttt
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

    class Program
    {
        static void Main(string[] args)
        {
            RsaEncryption rsa = new RsaEncryption();
            string cypher = string.Empty;

            //Console.WriteLine($"public Key: {rsa.GetPublicKey()}\n");

            Console.WriteLine("enter your text to encrypt");
            var text = Console.ReadLine();
            if (!string.IsNullOrEmpty(text))
            {
                cypher = rsa.Encrypt(text);
                Console.WriteLine($"Encrypted Text: {cypher}");
            }

            Console.WriteLine("press any key to decrypt text");
            Console.ReadLine();
            var plainText = rsa.Decrypt(cypher);

            Console.WriteLine($"Decrypted Message: {plainText}");
            Console.ReadLine();
        }
    }
}
