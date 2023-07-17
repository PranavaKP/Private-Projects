import tkinter as tk
from tkinter import ttk

#function with paramter: 
#basically use lambda
#or just redirect the entered in command function to a function with parameters

def bttn1(a_string):
    print(a_string.get())

def bttn2Outer(a_string):
    def bttn2Inner():
        print(a_string.get())
    #u need this because it only returns through the command attribute of the
    #bttn and doesn't automatically execute like it does without lambda or this
    return bttn2Inner

#window
window = tk.Tk()
window.title('Function with Parameters in Buttons')

#widgets
entryValue = tk.StringVar()
entry = ttk.Entry(window, textvariable=entryValue)
 #lambda version
button1 = ttk.Button(window, text='Button1', command=lambda: bttn1(entryValue))
 #function inside a function version
button2 = ttk.Button(window, text='Button2', command=bttn2Outer(entryValue))

#layout
entry.pack()
button1.pack()
button2.pack()

#run
window.mainloop()