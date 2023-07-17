#strings can be cast as strings with either " or '
print("Hello")
print('Hello')

#multiline strings: words surrounded with ''' ''' or """ """
a = '''In Python, a multiline string is a sequence of characters enclosed in triple quotes (either single quotes or double quotes) that can span over multiple lines. Multiline strings are useful for creating formatted text or for writing longer blocks of code. They are also commonly used for creating docstrings - a type of documentation string that describes the purpose and usage of a function, method, or module in Python. When a multiline string is assigned to a variable, Python preserves the line breaks and whitespace characters within the string, allowing you to format the text in a way that's easy to read and understand.'''
print(a)

#strings are arrays
b = "banana'
print(b[1])

#check length
len(a)

#check string
txt = "The best things in life are free!"
print("free" in txt) #or

txt = "The best things in life are free!"
if "free" in txt:
    print("Yes, 'free' is present.")

#check if NOT in string
txt = "The best things in life are free!"
print("expensive" not in txt) #or

txt = "The best things in life are free!"
if "expensive" not in txt:
    print("No, 'expensive' is NOT present.")

#slicing strings
c = "Hello World!"
print(c[3:7]) #slice from first metioned number(3) to index before the second mentioned number(7)
print(c[:7]) #slice from first index to index before the mentioned number(7)
print(c[4:]) #slice from first mentioned number(4) to last index
print(c[-2:-5]) #slice using negative indexing where the index values start from the right side instead of the left

#modify strings
d = "Hello, World!"
print(d.upper()) #makes string into upper case
print(d.lower()) #makes string into lower case
print(d.strip()) #removes all white spaces : "_"
print(d.replace("H", "J")) #replaces letter H with J
print(d.split(",")) #splits string at a certain indicated character which is "," in this case

#format strings - used to insert numbers into strings since strings and numbers cant be combined together other than in print func with commas

#basic format example
age = 15
txt = "My name is Pranav, and I am {}"
print(txt.format(age))

#multi format example
quantity = 3
itemno = 567
price = 50
myorder = "I want {} pieces of item {} for {} dollars."
print(myorder.format(quantity, itemno, price))

#multi format with indexing example
quantity = 3
itemno = 567
price = 49.95
myorder = "I want to pay {2} dollars for {0} pieces of item {1}."
print(myorder.format(quantity, itemno, price))

#escape characters - backslash type characters used to insert illegal characters in strings that will pop up an error

# \' used for single quotes
txt = 'It\'s alright.'

# \" used for double quotes
txt = "We are the so-called \"Vikings\" from the north."

# \\ used to insert one backslash
txt = "This will insert one \\ (backslash)."

# \n creates a new line
txt = "Hello\nWorld!"

# \t inserts one tab space
txt = "Hello\tWorld!"

# \b inserts one backspace
txt = "Hello \bWorld!"

# \000 a backslash with three numbers will create an octal value
txt = "\110\145\154\154\157"

# \xhh a backslash with a x and a hex number will result in a hex value
txt = "\x48\x65\x6c\x6c\x6f"