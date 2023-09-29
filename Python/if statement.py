a=10
b=20
if b>a:
    print("B is greater than A")
#B is greater than A
if a>b:
    print("A is greater than B")
elif a>b:
    print("A is greater than B")
else:
    print("B is greater than A")
#B is greater than A
#Tuple with if
tup1=("a","b","c")
if "a" in tup1:
    print("a is present in tup1")
#a is present in tup1
#List with if
l1=["a","b","c"]
if l1[0]=="a":
    l1[0]=100
print(  l1)
#[100, 'b', 'c']
#Dictionary with if
d1={"k1":10,"k2":20,"k3":30}
if d1["k1"]==10:
    d1["k1"]=d1["k1"]+100
print( d1)
#{'k1': 110, 'k2': 20, 'k3': 30}
