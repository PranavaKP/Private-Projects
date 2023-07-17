import tkinter as tk
from tkinter import ttk

#functions
def bttnFunc():
    print(labelEntryConnection.get())
    #set() is similar to config but it sets it to its default attribute while config allows to specify which attribute to change
    labelEntryConnection.set('Button Pressed') 
#window
window = tk.Tk()
window.title('Tkinter Variables')

#tkinter variabel: StringVar, IntVar, DoubleVar, BooleanVar
  #basically, it automatically gets and sets widgets and instantly updates them
  #and the widgets using the tkinter var share the same data
  #they are connected to widgets using the variable attribute or textvariable attribute if they store a string
labelEntryConnection = tk.StringVar(value='initial value') #you can leave the () blank if no initial value needed

#widgets
label = ttk.Label(master=window, text='Some Label', textvariable=labelEntryConnection)
label.pack()
entry = ttk.Entry(master=window, textvariable=labelEntryConnection)
entry.pack()
button = ttk.Button(master=window, text='Button', command=bttnFunc)
button.pack()

#run
window.mainloop()