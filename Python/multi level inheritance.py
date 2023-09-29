#multi-level inheritance
class Parent(): 
    def assign_name(self,name): 
        self.name = name
        
    def show_name(self): 
        return self.name
class Child(Parent): 
    def assign_age(self,age): 
        self.age = age
        
    def show_age(self): 
        return self.age
class GrandChild(Child): 
    def assign_gender(self,gender): 
        self.gender = gender
        
    def show_gender(self): 
        return self.name
g1 = GrandChild()
g1.assign_name("Sam")
g1.assign_age(25)
g1.assign_gender("Male")
print(  g1.show_name())
#'Sam'
print(  g1.show_age())
#25
print(  g1.show_gender())
#'Sam’ 
