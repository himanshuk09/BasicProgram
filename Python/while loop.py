#Printing 1-10  using while loop
i=1
while i<=10:
    print(i)
    i=i+1
#Printing 2-table with while loop
i=1
n=2
while i<=10:
    print(n," * ", i, " = ",n*i)
    i=i+1
#While with list
l1=[1,2,3,4,5]
i=0
while i<len(l1):
    l1[i]=l1[i]+100
    i=i+1
print(l1)