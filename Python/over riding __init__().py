class Vehicle:
    
    def __init__(self,mileage, cost):
        self.mileage = mileage
        self.cost = cost
        
    def show_details(self):
        print("I am a Vehicle")
        print("Mileage of Vehicle is ", self.mileage)
        print("Cost of Vehicle is ", self.cost)
v1 = Vehicle(500,500)
v1.show_details()
print(  ) 
class Car(Vehicle):
    
    def __init__(self,mileage,cost,tyres,hp):
        super().__init__(mileage,cost)
        self.tyres = tyres
        self.hp =hp
        
    def show_car_details(self):
        print("I am a car")
        print("Number of tyres are ",self.tyres)
        print("Value of horse power is ",self.hp)
c1 = Car(20,12000,4,300)
c1.show_details()
