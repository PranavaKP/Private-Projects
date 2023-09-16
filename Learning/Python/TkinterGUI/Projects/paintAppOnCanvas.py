import tkinter as tk
from tkinter import ttk

#func
def drawFunc(event):
    x = event.x
    y = event.y
    ovalPos = (x-brushSize/2, y+brushSize/2, x+brushSize/2, y-brushSize/2)
    canvas.create_oval(ovalPos, fill='green', width=0)

def adjustBrushSize(event):
    global brushSize # this thing only counts as an abs value for some reason
    if event.delta < 0 and brushSize >=0:
        brushSize-=1 
    else:
        brushSize+=1

#window
mainWindow = tk.Tk()
mainWindow.title('Pain App On Canvas Widget')
brushSize = 0

#canvas
canvas = tk.Canvas(mainWindow, bg='white')
canvas.pack()

#event
canvas.bind('<Motion>', drawFunc)
mainWindow.bind('<MouseWheel>', adjustBrushSize)

#run
mainWindow.mainloop()