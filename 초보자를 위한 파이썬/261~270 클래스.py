# 261 주식 종목에 대한 정보를 저장하는 Stock 클래스를 정의해보세요. 클래스는 속성과 메서드를 갖고 있지 않습니다.
class Stock:
    pass


# 262 Stock 클래스의 객체가 생성될 때 종목명과 종목코드를 입력 받을 수 있도록 생성자를 정의해보세요.
class Stock:
    def __init__(self, name, code):
        self.name = name
        self.code = code
        print(self.name, self.code)

삼성 = Stock("삼성전자", "00394")


# 263 객체에 종목명을 입력할 수 있는 set_name 메서드를 추가해보세요.
class Stock:
    def __init__(self, name, code):
        self.name = name
        self.code = code

    def set_name(self, name):
        self.name = name

a = Stock(None, None)
a.set_name("삼성전자")
print(a.name)


# 264 객체에 종목코드를 입력할 수 있는 set_code 메서드를 추가해보세요.
class Stock:
    def __init__(self, name, code):
        self.name = name
        self.code = code

    def set_code(self, code):
        self.code = code

a = Stock(None, None)
a.set_code("133245")
print(a.code)


# 265 종목명과 종목코드를 리턴하는 get_name, get_code 메서드를 추가하세요.
class Stock:
    def __init__(self, name, code):
        self.name = name
        self.code = code

    def set_name(self, name):
        self.name = name
        return

    def set_code(self, code):
        self.code = code

    def get_name(self):
        return self.name

    def get_code(self):
        return self.code

a = Stock("삼성전자", "248734")
print(a.get_code(), a.get_name())


# 266 생성자에서 종목명, 종목코드, PER, PBR, 배당수익률을 입력 받을 수 있도록 생성자를 수정하세요.
class Stock:
    def __init__(self, name, code, PER, RBR, benefit):
        self.name = name
        self.code = code
        self.per = PER
        self.rbr = RBR
        self.bene = benefit


# 267 266번에서 정의한 생성자를 통해 다음 정보를 갖는 객체를 생성해보세요.
class Stock:
    def __init__(self, name, code, PER, RBR, benefit):
        self.name = name
        self.code = code
        self.per = PER
        self.rbr = RBR
        self.bene = benefit

삼성 = Stock("삼성전자", "23646872", "15.78", "1.44", "246")
print(삼성.bene)


# 268 PER, PBR, 배당수익률은 변경될 수 있는 값입니다. 변경할 때 사용하는 set_per, set_pbr, set_dividend 메서드를 추가하세요.
class Stock:
    def __init__(self, name, code, PER, RBR, benefit):
        self.name = name
        self.code = code
        self.per = PER
        self.rbr = RBR
        self.bene = benefit

    def set_per(self, per):
        self.per = per

    def set_rbr(self, rbr):
        self.rbr = rbr

    def set_dividend(self, bene):
        self.bene = bene

# 269 set_per 메서드를 호출하여 per 값을 12.75로 수정해보세요.
삼성 = Stock("삼성전자", "23646872", "15.78", "1.44", "246")
print(삼성.per)
삼성.set_per('12.78')
print(삼성.per)


# 270 파이썬 리스트에 저장된 각 종목에 대해 for 루프를 통해 종목코드와 PER을 출력해보세요.
list = []

삼성 = Stock("삼성전자", "23646872", "15.78", "1.44", "246")
현대차 = Stock("현대차", "444444", "44.44", "222.22", "486")
LG전자 = Stock("LG전자", "4738549", "ㅈㄷㄱ", "2436", "ㄷ공ㄹㅋ")

list.append(삼성)
list.append(현대차)
list.append(LG전자)

for i in list:
    print(i.code, i.per)         # i-> Stock 클래스의 객체를 바인딩하기 때문
