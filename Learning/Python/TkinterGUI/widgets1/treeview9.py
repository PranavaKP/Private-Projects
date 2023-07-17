import tkinter as tk
from tkinter import ttk

#window
window = tk.Tk()
window.title('Treeview')

#data
firstName = ['fN1', 'fN2', 'fN3', 'fN4', 'fN5']
lastName = ['lN1', 'lN2', 'lN3', 'lN4', 'lN5']

#treeview
table = ttk.Treeview(window,
        columns = ('first', 'second', 'third'), #creates the columns as ui but doesn't give it a title
        show='headings') #headings sets name for a certain thing(the thing could be the name of the columns)

#headings
table.heading('first', text='First Name') #sets text for 'first' column
table.heading('second', text='Last Name') #sets text for 'second' column
table.heading('third', text='Email') #sets text for 'third' column

#insert values into table using .insert()
table.insert(parent='', #related with OOP; keep it empty for now ig bc u suck
            index=0, #kinda like indexes in a list but in rows of tables instead also use tk.END to add to end of thing
            values=('Pranava', 'Ponvinayagan', 'pranava.ponvinayagan@gmail.com')) #enters in values for that row

#insert a lot using for loops and data lists
for x in range(len(firstName)):
    email = f'{firstName[x]}.{lastName[x]}@email.com'
    data = (firstName[x], lastName[x], email)
    table.insert(parent='', index=tk.END, values=data) #use tk.END to always add to bottom

#events:

#select item(s) : get info about items
def getSelectionInfo(event): #.selection() gives use info; event sucks
    print(table.selection())#gets id of selected items: hold ctrl and select more than 1 item    
    for i in table.selection():#loops through all the selected items
        print(table.item(i))#use .item to get info about the item other than id
table.bind('<<TreeviewSelect>>', getSelectionInfo) #print event sucks, use .selection()

#deleting items using delete key: use .delete() and .selection()
def deleteItem(event): #just delete the thing
    for i in table.selection():
        table.delete(i) #deletes the item
table.bind('<Delete>', deleteItem)

#layout
table.pack()

#run
window.mainloop()