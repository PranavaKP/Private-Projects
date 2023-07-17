import tkinter as tk
from tkinter import ttk

#tabs/notebooks have multiple children frames: each tab is one frame

window = tk.Tk()
window.title('Tabs')

#notebook widget
noteBook = ttk.Notebook(window) #main widget

#tab1
tab1 = ttk.Frame(noteBook, width=300, height=300) #frame under notebook
tab1.pack_propagate(False)
tb1Label = ttk.Label(tab1, text='Tab 1 Label') #widgets in tabs have to be set under the frame for its master
tb1Bttn = ttk.Button(tab1, text='Button in Tab 1')
tb1Label.pack()
tb1Bttn.pack()

#tab2
tab2 = ttk.Frame(noteBook, width=300, height=300) #frame under notebook
tab2.pack_propagate(False)
tb2Entry = ttk.Entry(tab2)
tb2Bttn = ttk.Button(tab2, text='Button in Tab 2')
tb2Entry.pack()
tb2Bttn.pack()

#layout
noteBook.add(tab1, text='Tab 1')#actually assigns the frames as tab and gives it a name
noteBook.add(tab2, text='Tab 2')#basically, instead of pack u add
noteBook.pack()

window.mainloop()