#creating a phone class
class Phone:
    
    def make_call(self):
        print("Making phone call")
    
    def play_game(self):
        print("Playing Game")
p1=Phone()
p1.make_call()
p1. play_game()
print(  )
#Add parameters
class Phone:
    
    def set_color(self,color):
        self.color=color
        
    def set_cost(self,cost):
        self.cost=cost
        
    def show_color(self):
        return self.color
    
    def show_cost(self):
        return self.cost
    
    def make_call(self):
        print("Making phone call")
    
    def play_game(self):
        print("Playing Game")
p2=Phone()
p2.set_color("blue")
p2.set_cost(100)
print(  p2.show_color())
#'blue'
print(  p2.show_cost())
#100
p2. make_call()
p2. play_game()
print(  )
#Creating Employee class
#constructor __init__
class Employee:
    def __init__(self,name,age, salary,gender):
        
        self.name = name
        self.age = age
        self.salary =  salary
        self.gender = gender
        
    def employee_details(self):
        print("Name of employee is ",self.name)
        print("Age of employee is ",self.age)
        print("Salary of employee is ",self.salary)
        print("Gender of employee is ",self.gender)
e1 = Employee('Sam',32,85000,'Male')
e1.employee_details()
