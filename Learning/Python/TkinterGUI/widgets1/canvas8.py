import tkinter as tk
from tkinter import ttk

#window
mainWindow = tk.Tk()
mainWindow.title('Canvas')

#canvas: there are a lot of functions with canvas, those functions don't need pack() but the canvas does
#https://www.pythontutorial.net/tkinter/tkinter-canvas/
#https://anzeljg.github.io/rin2/book2/2405/docs/tkinter/canvas.html 

#main canvas: order of creations in canvas matter
canvas = tk.Canvas(mainWindow, bg='white') #invisible by default, so give it a background color using bg
canvas.pack()

#create rectangle on canvas
rectangleCoords = (25, 50, 100, 200) # 1Num=leftline, 2Num=topline, 3Num=rightline, 4Num=bottomline :
canvas.create_rectangle(rectangleCoords, #pos of rectangle:don't have to use a variable to store it in
        fill='green', #fills in color of rectangle
        width=3, #width of border
        dash=(1,2), #dash patter of border: first num is length, and second is gap
        outline='blue') #outline color of border

#create oval/circle on canvas
ovalCoords = (50, 25, 100, 75) #same as rect: left, top, right, bottom
canvas.create_oval(ovalCoords, fill='green') #more attributes like rect

#create arc on canvas
arcCoords = (50, 25, 100, 75) #same as rect
canvas.create_arc(arcCoords, fill='yellow',
        start=45, #the initial side of arc
        extent=90, #the terminal side of the arc but u add the extent to the start to get it 
        style=tk.PIESLICE, #PIESLICE is normal, ARC is only the outline part, and CHORD gets rid of the part connecting to the center
        width=3, outline='blue') #more attributes like rect

#create line on canvas
lineCoords = (15, 5, 30, 90) # 1Num=start x, 2Num=start y, 3Num=end x, 4Num=end y
canvas.create_line(lineCoords, fill = 'black') #more attributes like rect

#create sided any polygon: based on number of points/coordinates
polygonCoords = (5,15, 30,60, 50,90) #coordinates are grouped up in pairs of x and y: (x1,y1 , x2,y2, x3,y3...)
canvas.create_polygon(polygonCoords, fill='blue') #more attributes like rect

#create left positioned text
leftPosTextCoords = (50, 50) #stores value for the top left corner of the text
canvas.create_text(leftPosTextCoords, text='LeftPosText', fill='black', width=100) #width = size of textbox

#create another window: u can have widgets inside of it doesn't just have to be text
windowCoords = (100, 100)
canvas.create_window(windowCoords,
    window=ttk.Label(mainWindow, text='Centered Text')) #create a window inside canvas, set it to have a widget that is under the main window

#run
mainWindow.mainloop()