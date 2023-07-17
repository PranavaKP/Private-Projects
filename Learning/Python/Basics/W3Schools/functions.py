#functions
def my_func():
    print("I like python")

my_func()

#use of global variables: if outside of function or if defined with global
def globalVarFunc():
    global testVar
    testVar = "Test!!!"
    
globalVarFunc()
print("Hello!! This is a ", testVar)