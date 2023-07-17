import tkinter as tk
from tkinter import ttk

#events: when a user does something with a widget resulting in some action; kinda like an onEvent thing in code.org's js; a prebuild example of an event is the command attribute that executes a function when a user clicks it
#use the bind methord : .bind(event, function) --> event format: '<modifier-type-detail>' --> https://www.pythontutorial.net/tkinter/tkinter-event-binding/ 

#event modifiers: Alt(hold alt), Shift(hold shift), Control(hold ctrl), Any(hold any key)

#event types: Activate(state of widget becomes active), Button(1 mousebttn is pressed)
#ButtonRelease(1 mousebttn is released), Configure(size of widget changed), Deactivate(state of widget becomes inactive)
#Destroy(widget is destroyed), Enter(mousepointer enters), Expose(thing becomes visible after being covered up),
#FocusIn(thing is clicked/selected), FocusOut(thing is unclicked/unselected), 
#KeyPress(thing is pressed), KeyRelease(thing is released), Leave(mouse pointer leaves),
#Map(widget is placed in a containter:layout stuff), Motion(mouse pointer is moved within the thing)
#MouseWheel(scroll up or down), Umap(unmapped/not visible), Visibility(app window becomes visible)

#event detail: Alt_L, Alt_R, BackSpace, Cancel, Caps_Lock, Control_L, Control_R, Delete, Down, End, Down, Escape,
#Execute, F1, F2, Fi, F12, Home, Insert, Left, Linefeed, KP_0, KP_1, .. KP_9, KP_Add, KP_Begin, KP_Decimal, KP_Delete,
#KP_Divide, KP_Down, KP_End, KP_End, KP_Enter, KP_Home, KP_Insert, KP_Left, KP_Multiply, KP_Next, KP_Prior
#KP_Right, KP_Subtract, KP_Up, Next, Num_Lock, Pause, Print, Prior, Return, Right, Scroll_Lock, Shift_L, Shift_R, Tab

#functions
def getPos(event):
    print(f'x:{event.x}, y:{event.y}') #use f string for positions ig idk

#window
window = tk.Tk()
window.title('Event Bindings')

#widgets
text = tk.Text(window)
entry = ttk.Entry(window)
bttn = ttk.Button(window, text='Button')

#layout
text.pack()
entry.pack()
bttn.pack()

#events: events have attributes which can be accessed and used using event.
window.bind('<Alt-KeyPress-a>', lambda event: print('sup')) #add event with lambda for some reason
window.bind('<KeyPress-Escape>', lambda event: print(event)) #printing event prints attributes of the event and widget also no need to keep the entire event format
bttn.bind('<KeyPress-Return>', lambda event: print('bttn pressed')) #event associated with bttn widget
text.bind('<Motion>', getPos) #like entering in event into lambda do so to a normal function as well
entry.bind('<FocusIn>', lambda event: print('Entry field was selected')) #focusIn event: is called when something is selected/clicked ig
#there are more event types

#run
window.mainloop()