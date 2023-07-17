import tkinter as tk
from tkinter import ttk

#functions
def bttnFunc():
    #get() methord gets the attributes stored in the widget such as entry:not all widgets support this methord 
    entryText = entry.get()

    #config() methord changes or updates the attributes of a widget such as label
    #to get all the different attributes that can be configured, you can print or do something with: widgetVar.configure()
    label.config(text = entryText)
    label['text'] = entryText #another version of config
    entry['state'] = 'disabled'

#window
window = tk.Tk()
window.title('Getting and Setting Widgets')

#widgets
  #label
label = ttk.Label(master = window, text = 'Text')
label.pack()
  #entry
entry = ttk.Entry(master = window)
entry.pack()
  #button
button = ttk.Button(master = window, text = 'Button', command = bttnFunc)
button.pack()

#run
window.mainloop()