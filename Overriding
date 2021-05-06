class Car(object):
  def__init__(self, category, fuel):
    self.category = category
    self.fuel = fuel
    
  def display_mycar(self):
    print("My car is {0} and it requires {1} for fuel.".format(self.category, self.fuel))

calss Ecar(Car):
  pass
  
myecar = Ecar("a new car", "electricity")
myecar.display_mycar()
mysportscar = Car("an old car","gasoline")
mysportscar.display_mycar()





class Car(object):
    def __init__(self, category, fuel):
        self.category = category
        self.fuel = fuel

    def display_mycar(self):
        print ("My car is {0} and it requires {1} for fuel.". format(self.category,self.fuel))

class Ecar(Car):
    def display_mycar(self):
        print ("My car does not require fuel. and it only requires {}.". format(self.fuel))         //pass 없이 오버라이딩

myecar = Ecar("a new car","electricity") 
myecar.display_mycar()
mysportscar = Car("an old car", "gasoline")
mysportscar.display_mycar()







class Car(object):
  def __init__(self, toll):
      self.toll = toll

  def display_car(self):
      print ("The toll for a sedan is {} dollars". format(self.toll))

class Truck(Car):

  def display_car(self):
      print ("The toll for a truck is {} dollars". format(self.toll))


pay_toll = Truck("3")
pay_toll.display_car()

pay_toll = Car("2")
pay_toll.display_car()
