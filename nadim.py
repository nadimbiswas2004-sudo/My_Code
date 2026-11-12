#String.
print("Hello, world!")
print("Ahte Shamul Hoque Nadim Biswas")
m="jdvdnvknsk"
print(m)
#integer.
j=123456789
print(j)
h=2004
print(h)
#float.
r=3.1416
print(r)
#boolean.
f=True
print(f)
#list.
my_list =["Nadim",22,1297,True]
print(my_list)
my_list2=[3,5,8,50]
my_list2.append(500)
print(my_list2)
# Dictionary
my_dic={"name":"Nadim","age":22,"id":1297,"is_student":True}
print(my_dic)
#Set
my_Set={
    "Nadim",
    22,
    1297,
    True
}
print(my_Set)
#tuple
my_tuple =("Nadim",22,1297,True)
print(my_tuple)
#range
my_range=range(1,10)
for num in my_range:
    print(num)
    M=range(1,20,2)
    print(*M)
#user input
val=input("Enter the number:  ")
print(val)
name=input("Enter your name:  ")
print("Hello, ",name)

#IF Stetment
u=int(input("Enter the number: "))
if u<10:
    print(u," is lasethen 10")
else:
    print(u," is lasethen 10")

x= input("Enter the string:  ")
if x=="N":
    print(x," is matched")
elif x=="M":
    print(x,"is matched")
else:
    print(x,"is not matched")

#For loop
for nm in range(1, 18, 3):
    print(nm, end=" ")
    print()

print("--------------------")


#triangle
for i in range(1, 8):
    for j in range(i):
        print('*', end=' ')
    print()

n=int(input("Enter the traingle rows: "))

for i in range(n,0,-1):
    for j in range(i):
        print("@", end=" ")
    print()    

#While loop
b=int(input("Enter the number: "))
while b<10:
    print(b," is less than 10")
    b+=1

#function
def nadim(name,id, address):
    print("Name: ",name)
    print("ID: ",id)
    print("Address: ",address)

nadim("Athe Shamul Hoque Nadim Biswas", 11230321297, "Khulna , Bangladesh")

def factorial(n):
    if n==0 or n==1:
        return 1
    else:
        return n*factorial(n-1)
enter_factorial=int(input("Enter the number to find factorial: "))
print("Factorial of ", enter_factorial," is ", factorial(enter_factorial))

def dic(c):
    for i in c:
        print(i,":",c[i])
my_dic={"name":"Nadim","age":22,"id":1297,"is_student":True}
dic(my_dic)

num=list(map(int, input("Enter the numbers separated by space: ").split()))
number= map(lambda x: x*3, num)
print(list(number))

#class
class nadim:
    def __init__(self, name, id , year, age):
        self.name=name
        self.id=id
        self.year=year
        self.age=age
    def display_info(self):
        print("Name: ", self.name)
        print("ID: ", self.id)
        print("Year: ", self.year)
    def display(self):
        print("This is a nested function.")
        print("Age: ", self.age)
n=nadim("Athe Shamul Hoque Nadim Biswas", 11230321297, 2026, 22)
n.display_info()
n.display()

#inharitance
class name:
    def n(self):
        self.a= "ASHNB"
        self.c=1297
class age:
    def o(self):
        self.d=22
        self.f=2023
class info(name, age):
    def display(self):
        print("Name: ", self.a)
        print("ID: ", self.c)
        print("Age: ", self.d)
        print("Year: ", self.f)

info1=info()
info1.n()
info1.o()
info1.display()
