#dictionary
#{}

fruit={"Apple":10,"Orange":20,"Banana":30,"Guava":40}
#data type
print(type(fruit)  )
#extracting keys #Apple 
print(fruit.keys())
#extracting values #10
print(fruit.values())
#check values
print(fruit['Orange'])
#adding keys and value
fruit['mango']=80
print(fruit)
#change value of existing dictionary
fruit['Apple']=100
print(fruit)
fruit1={"Apple":10,"Orange":20}
fruit2={"Banana":30,"Guava":40}
#update 
fruit1. update(fruit2)
print(fruit1)
#pop
print(  fruit1. pop('Orange'))
print( fruit1)
