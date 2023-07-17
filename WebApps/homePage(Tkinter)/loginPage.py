import tkinter as tk
from tkinter import ttk

#window
loginPage = tk.Tk()
loginPage.title('Login Page')
loginPage.geometry('1500x750')

#functionalities
def enterFunc(username, password):
    if username == 'PranavaKP' and password == 'Muruga':
        print(True)
        title['text'] = 'Welcome!'
        loginPage.destroy()
        import mainPage
    else:
        print(False)
        title['text'] = 'Please Try Again!'


#widgets
title = ttk.Label(loginPage, text='Enter Your Login Information')
usernameLabel = ttk.Label(loginPage, text='Username:')
passwordLabel = ttk.Label(loginPage, text='Password:')
usernameInput = ttk.Entry(loginPage)
passwordInput = ttk.Entry(loginPage)
enterButton = ttk.Button(loginPage, text='Enter',
     command= lambda: enterFunc(usernameInput.get(), passwordInput.get()))

#layout
title.pack()
usernameLabel.pack()
usernameInput.pack()
passwordLabel.pack()
passwordInput.pack()
enterButton.pack()

#events
loginPage.bind('<KeyPress-Return>', lambda event: enterFunc(usernameInput.get(), passwordInput.get()))
loginPage.bind('<KeyPress-Escape>', lambda event: loginPage.quit())

#run
loginPage.mainloop()
