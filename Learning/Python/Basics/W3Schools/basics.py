#commandline printing
print("Hello World!!!")

#variables: can not start with a number and cant have spaces or dashes in it
hi = 5
hello = "Bonjour!"

#multi line stuff
"""
This is a multiline comment
"""

print("""This is a 
      multi line string""")

#Camal Case var
exampleVar = 1
#Pascal Case var
ExampleVar = 2
#Snake Case var
example_var = 3

#casting = specifically telling program something is of a certain type of data
str0 = str(3)
str1= str("hey")
int0 = int(3)
float0 = float(3.5)
complex0 = complex(1j)
range0 = range(6)
boolTrue = bool(True)
boolFalse = bool(False)

#lists = can contain any data type: able to be changed later
fruits = ["apple", "bananna", "cherry"]
#unpacking
fruit1, fruit2, fruit3 = fruits
print(fruit1)
print(fruit2)
print(fruit3)

#tuple: unable to be changed later
tuple0 = ("apple", "banana")

#dict: a certain item is assigned with another item with : and different sets are seperated by ,
dict0 = {"name" : "Pranav", "age" : "15"}

#set: cant have multiple of same elemetns and items are of no order
set0 = {"apple", "banana"}

#frozenset: cant have multiple of same elments and items are of no order and set is immutable/tuple
frozenset0 = ({"hi", "hey"})

#convert number types
convInt = 1    # int
convFloat = 2.8  # float
convComp = 1j   # complex

#convert from int to float:
intToFloat = float(convInt)

#convert from float to int:
floatToInt = int(convFloat)

#convert from int to complex:
intToComp = complex(convInt)

print(intToFloat)
print(floatToInt)
print(intToComp)

#getting the type of the variable
print(type(intToFloat))
print(type(floatToInt))
print(type(intToComp))

#storing multiple variables in one line
a,s,d = int(1), str("bananna"), float(1.9)
# one val to multiple var
ex1 = ex2 = "exampleVar"

#printing multiple things in one line: best way is use , bc supports different data types
print("My favorite fruits are ", fruit1, fruit2, fruit3)
print("My favorite fruits are "+ fruit1 + fruit2 + fruit3)

#random number
import random
print(random.randrange(1,10))

#global variables can be used anywhere even if declared in functions or loops or if statements but they have to be declared without a value i believe
global globalVar
