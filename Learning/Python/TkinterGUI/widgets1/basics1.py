import tkinter as tk #imports tkinter this is required
from tkinter import ttk #imports more widgets and stuff for tkinter

#normal python stuff
def sayHello():
    print("Hello!")

#main app window
window = tk.Tk() #creates the actual window
window.title('Basics of Tkinter') #changes the title attribute of the window
window.geometry('800x500') #changes the geometry attribute of the window; make sure there are no spaces

#widgets(tk or ttk): the order of the widgets determines its placement

  #lable
lableWidgetTtk = ttk.Label(master = window, text = 'Text Thingy') #creates a variable which is assigned the text widget and it is set inside the window(doesn't have to always be called as equal to master)
lableWidgetTtk.pack() #this variable widget is organized inside the window

  #text box to type in
textWidgetTk = tk.Text(master = window) 
textWidgetTk.pack() 

  #entry/single line entry box
entryWidgetTtk = ttk.Entry(master = window)
entryWidgetTtk.pack()

  #button
buttonWidgetTtk = ttk.Button(master = window, text = "Button", command = sayHello) #command is used to define what the button does, it can be done so through a function, lambda thing, and etc: generally func and lambda tho
buttonWidgetTtk.pack()

#running the thing: updates the gui and checks for events
window.mainloop()