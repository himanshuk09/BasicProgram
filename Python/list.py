#list
#mutable
#[]
#can change anywhere
ls1 =[1,3.14,True,'hello']
#data type
print(type (ls1))
print(ls1[0])
print(ls1[-1]  )
print(ls1[1:4] )
#change 
ls1[3]='world'
print(ls1 )
#len
print(len(ls1))
ls1=[1,2,3]
ls2=[4,5,6]
#min
print(min(ls1))
#max
print(max(ls1))
#display
print(ls1,ls2)
#concatenation
print(ls1+ls2)
#multiple#repeat
print(ls1*3)
print(ls1*3+ls2)
#append
ls1.append(4)
print(ls1)
#pop()
ls1. pop()
print( ls1 )
#insert
ls2.insert(1,8)
print(ls2)
#
ls1. reverse()
print(ls1)
#sort
lt=['e','a','b','d','j','c']
lt.sort()
print(lt  )