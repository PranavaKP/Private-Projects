import tkinter as tk
from tkinter import ttk

#frames are basically a widget in which u can have other widgets in: helps with layout

window = tk.Tk()
window.title('Frames and Parenting')

#frame
frame = ttk.Frame(window,
        width= 500, height=300, #geometry of widget
        borderwidth=12, relief=tk.GROOVE)#border of widget, .GROOVE sets a constant border color, .FLAT hides it, .RAISED gives it a raised look, .SUNKEN gives it a sunken look
frame.pack_propagate(False) #by default frame geometry is overridden by children widget size, set this to false to use width and height

#master setting/parenting
lableInFrame = ttk.Label(frame, text='Label Inside Frame')
lableInFrame.pack(side='left')#side attribute can be used to set to any side not just top more on this later

buttonInFrame = ttk.Button(frame, text='Button Inside Frame', command=lambda:print('Some Function'))
buttonInFrame.pack(side='right')#side attribute can be used to set to any side not just top more on this later

lableOutFrame = ttk.Label(window, text='Lable Outside Frame')
lableOutFrame.pack()

frame.pack() #the position of this pack can change the layout

window.mainloop()