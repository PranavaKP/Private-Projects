#list = store multiple things(elements in a single var)
#elemnts are ordered; changeable; can have duplicate element values
#index(order #) starts at 0

#basics
aList = ["1", "2", "3", "1"] # this is a list
print(aList) # print the list
lengthOfList = len(aList) # len() gets the length of the list similar to list.length in js
print(type(aList)) # list is an object and its type is a list

#multiple data
listWithString = ["Hello", "Bonjour"]
listWithNum = [1, 2, 3]
listWithBool = [True, False]
listWithWhatever = ["Hello", 1, True]

#declaring lists with list() constructor
listTwo = list((1, 2, 3))

#accessing one element
exampleList = ["mango", "green", "yellow"]
    #accessing with pos index
print(exampleList[0])
print(exampleList[1])
print(exampleList[2])
    #neg indexing: -1 = last and # going neg will access from right to left
print(exampleList[-1])
print(exampleList[-2])
print(exampleList[-3])


#accessing multiple elements: left value: right value
accessList = ["apple", "banana", "cherry", "orange", "kiwi", "melon", "mango"]    
    #prints elements from index 2 to up to 4: 5 isnt included
print(accessList[2:5]) # prints cherry to kiwi
    #no start value = prints from start
print(accessList[:5]) #prints apple to kiwi
    #no end value = prints till end
print(accessList[2:]) #prints cherry to mango
    #using neg: start from left to right
print(accessList[-4:-1]) #prints orange to melon

#checking if element in list using the in thingy
if "mango" in accessList:
    print("Yay")

#changing, adding, inserting
changeAddInsert = ["apple", "banana", "cherry", "melon"]
#changing value of element: first access the item and set it equal to something else
changeAddInsert[0] = "grapes" #changes one value
changeAddInsert[0:2] = ["banana", "grapes"] #changes value of 0 and 1
changeAddInsert[0:1] = ["apple", "banana"] #more items than u should actually change: changes value of 0 and inserts value for index 1 pushing old 1 to 2
changeAddInsert[0:3] = ["mango"] #less than what u should change: 0 = mango and deletes 1 and 2

#insert items: list.insert(index, value)
changeAddInsert.insert(0, "watermelon")

#append items: list.append(value)
changeAddInsert.append("pineapple")

#extend items: appends items from any array type(lists, tuples, sets, dict)
#list.extend(otherListName)
extendList1 = ["apple", "banana", "cherry"]
extendList2 = ["mango", "pineapple", "papaya"]
extendList1.extend(extendList2)

#remove stuff list
removeList = ["apple", "banana", "cherry", "banana"]
    #remove a specified element: list.remove(element name); if lot of same element name then removes first one
removeList.remove("banana")
    #remove a speficid index: list.pop(index)
removeList.pop(0)
    #remove a speficid index with del: del list[index]
del removeList[1]
    #clear list: list.clear()
removeList.clear()
    #delete entire list: del listname
del removeList

