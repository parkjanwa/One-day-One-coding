class Car(object):
    def __init__(self, model):
        self.model = model

    def calculate_mileage(self, km):
        self.km = km
        return km * 200

road = Car('Sonata')
print (road.calculate_mileage(10))




# 상속
class Truck(Car):
    pass

road = Truck('road')
print (road.calculate_mileage(10))






# 오버라이딩
class Truck(Car)
  def calcuate_mileage(self, km):
    self.km = km
    return km * 300
    
road = Truck('road')
print(road.calculate_mileage(10))







# super 사용
class Truck(Car)
  def calcuate_mileage(self, km):
    self.km = km
    return km * 300
  
  def highway_mileage(self, km):
    return super(Truck, self),calculate_mileage(km)
    
highway = Truck('highway')
print(highway.claculate_maileage(10))
