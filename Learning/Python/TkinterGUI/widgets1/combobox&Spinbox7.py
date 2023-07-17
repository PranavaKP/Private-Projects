import tkinter as tk
from tkinter import ttk

#these things have a list of values and can be connecte to tkinter variables

#window
window = tk.Tk()
window.title('Combo and Spin Box')

#combobox
 #version1 
combo1TkVar = tk.StringVar(value = 'Select One of the Following') #stores the value of the selected item of the combobox
combo1 = ttk.Combobox(window,
    values=('Ice Cream', 'Pizza', 'Fish'), #values are used to set the selection options
    textvariable=combo1TkVar) 
combo1.pack()
 #version2: this is better
foodItems = ('Select One of the Following','Ice Cream', 'Pizza', 'Fish')
combo2TkVar = tk.StringVar(value = foodItems[0])
combo2 = ttk.Combobox(window, textvariable=combo2TkVar)
combo2['values'] = foodItems
 #event
combo2.bind('<<ComboboxSelected>>', lambda event: print(combo2TkVar.get())) #event type for selecting a combobox
 #layout
combo2.pack()

#spinbox: has command stuff as well ig
 #version1: combobox version
spinBoxValues1 = (1, 2, 3) #generally are numbers, but can be other things too
spin1 = ttk.Spinbox(window)
spin1['values'] = spinBoxValues1
spin1.pack()
 #version2: only dealing with numbers
spin2TkVar = tk.IntVar(value=9) #sets the display values and holds the current selected value
spin2 = ttk.Spinbox(window,
    from_=3, to=21, increment=2, #from_ is start val, to is end val, increment is the incremental val
    command=lambda:print('some button was pressed'),  #has a generic command for when any of the 2 buttons are pressed
    textvariable=spin2TkVar)
 #event
spin2.bind('<<Increment>>', lambda event: print('Up arrow pressed!!!'))
spin2.bind('<<Decrement>>', lambda event: print('Down arrow pressed!!!'))
 #layout
spin2.pack()

#run
window.mainloop()