import tkinter as tk
from tkinter import ttk

#window
window = tk.Tk()
window.title('More Buttons With Tkinter Var!')

#normal button
normalBttnVar = tk.StringVar(value='Button')
normalButton = ttk.Button(window, text='normalBttn', command=lambda: normalBttnVar.set("You clicked a Normal Button!"), textvariable=normalBttnVar)
normalButton.pack()

#checkboxes: the main purpose/usefull attribute is if it's checked or not
#but u can't get that value through .get(); u need tkinter variables!!!
checkBoxTkVar = tk.StringVar(value='Yay') #stores the value of the attribute for when its checked or not and pre-sets it to checked through the useage of value
checkBoxBttn = ttk.Checkbutton(window,
    text='checkBoxBttn',
    command= lambda: print(checkBoxTkVar.get()), #u can't get the value of the widget but u can of the tkinter variable connected to the widget
    variable=checkBoxTkVar, #instead of textvariable use just variable since it doesn't store a text
    onvalue='Yay', #value returned when check box is turned on: by standard this value is '1', 1, or true
    offvalue='Nay') #value when check box is turned off: by standard this value is '0', 0, false
checkBoxBttn.pack()

#radiobuttons: have their own values so when a button is clicked radiobttns with that same value will also be clicked:so use unique values
#the purpose is that when connected with tkinter variables, only one can be checked at a time
radioTkVar12 = tk.StringVar(value='1')#u can change this else where and connected radiobttns with this value will check automatically and other will uncheck
radioTkVar3 = tk.StringVar()
radioBttn = ttk.Radiobutton(window, text='Radiobutton1', value=1, variable=radioTkVar12)
radioBttn2 = ttk.Radiobutton(window, text='Radiobutton2', value='radio2', variable=radioTkVar12)
radioBttn3 = ttk.Radiobutton(window, text='Radio3', value="idk", variable=radioTkVar3)
radioBttn.pack()
radioBttn2.pack()
radioBttn3.pack()

#run
window.mainloop()