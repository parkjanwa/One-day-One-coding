# 288 메서드 오버라이딩
class 부모:
    def 호출(self):
        print("부모호출")

class 자식(부모):
    def 호출(self):
        print("자식호출")



# 289 생성자
class 부모:
  def __init__(self):
    print("부모생성")

class 자식(부모):
  def __init__(self):
    print("자식생성")


# 290 부모클래스 생성자 호출
class 부모:
  def __init__(self):
    print("부모생성")

class 자식(부모):
  def __init__(self):
    print("자식생성")
    super().__init__()

나 = 자식()