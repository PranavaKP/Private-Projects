#basic strings
myString("Some text!!!")
type(myString)
#numbers insdie strings
myString("33")
type(myString)
#quotes inside strings
myString('He said "HI!"')
print(myString)

#length of string
len(myString)

#substrings: index starts with 0 and ends with index val 'len() - 1' or just '-1'
myString("123456")
myString[0] #results in "1"
myString[-2] #results in "5"
myString[len(myString) - 1] #results in "6"

#group of substrings
myString[0:2] #results in "12" 
myString[1:] # results in "23456"
myString[-4:-1] #results in "345'
myString[-4:] #results in '3456"
myString[-4:len(myString) - 1]#reulsts in "345"
myString[:4] #results in "1234"
myString[:-1] #results in "12345"

#combining strings
print("Hello" + "Hello")
print("Hello User: " + str(123))


