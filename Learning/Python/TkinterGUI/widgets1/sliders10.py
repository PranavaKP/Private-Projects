import tkinter as tk
from tkinter import ttk
from tkinter import scrolledtext #scrollbar

#sliders = scale or progress bar in tkinter and show progress in 1-d
#scale = can be set by user or independently by tk var for ex
#progress bar = can only be set independently by tk var for ex

window = tk.Tk()
window.title('Sliders')

#tkinterVar
sliderTkVarFloat = tk.DoubleVar(value=50) #stores value of the slider: setting the value presets the value of scale

#scale
scale = ttk.Scale(window,
        command=lambda value: print(value), #sliders have float values for its pos
        from_=0, #sets the start value of the slider value
        to=100, #sets the end value of the slider value
        length=300, #increases the graphical size of scale
        orient='horizontal', #sets the oriantation: horizontal or vertical
        variable=sliderTkVarFloat) #tkinter variable
scale.pack()

#progress bar
progressBar = ttk.Progressbar(window,
            variable=sliderTkVarFloat, #tkinter variable
            maximum=100, #sets max value for progress bar; like to= in scale
            orient='horizontal', #orentiation of thing
            mode='indeterminate', #determinent means full bar; indeterminent means a bar that looks like a scale
            length=300) #changes graphical size of bar 
progressBar.pack()

#progress bar events
#progressBar.start() #start the thing
#progressBar.stop() #stops the thing

#scrolledtext
scrollBar = scrolledtext.ScrolledText(window, width=100, height=3) #ur a bozo if u don't understand this
scrollBar.pack()

#exercise
exTitle = ttk.Label(window, text='Exercise')
exTkVar = tk.DoubleVar(value=0)
exProgBar = ttk.Progressbar(window, variable=exTkVar, maximum=100, orient='vertical', mode='determinate', length=50)
exLabel = ttk.Label(window, text='#', textvariable=exTkVar)
exScale = ttk.Scale(window, variable=exTkVar, from_=0, to=100, orient='horizontal', length=100)
exProgBar.start()
exTitle.pack()
exProgBar.pack()
exLabel.pack()
exScale.pack()

window.mainloop()