L = [13, 12, 21, 16, 35, 7, 4]

s=5

s1 = 3

for i in L:
       if(i%4==0):
           s=s+i
           continue
       if (i % 7 == 0):
           s1 = s1 + i

print(s, end=" ")
print (s1)