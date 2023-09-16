import tkinter as tk
from tkinter import ttk

window = tk.Tk()
window.title("Tic Tac Toe")
window.geometry('400x500')

#functionality
playerOne = ""
playerTwo = ""
currentPlayer = ""
tickTackToeBoard = [[" _ ", " _ ", " _ "], [" _ ", " _ ", " _ "], [" _ ", " _ ", " _ "]]
names = ["A1", "B1", "C1", "A2", "B2", "C2", "A3", "B3", "C3"]
iList = [0, 0, 0, 1, 1, 1, 2, 2, 2]
jList = [0, 1, 2, 0, 1, 2, 0, 1, 2]

def printBoard():
  a1tk.set(tickTackToeBoard[0][0])
  a2tk.set(value=tickTackToeBoard[1][0])
  a3tk.set(value=tickTackToeBoard[2][0])
  b1tk.set(value=tickTackToeBoard[0][1])
  b2tk.set(value=tickTackToeBoard[1][1])
  b3tk.set(value=tickTackToeBoard[2][1])
  c1tk.set(value=tickTackToeBoard[0][2])
  c2tk.set(value=tickTackToeBoard[1][2])
  c3tk.set(value=tickTackToeBoard[2][2])

def playerOneTurn():
  global currentPlayer
  currentPlayer = "Player One"
  userTurnDisplayTk.set(f"{currentPlayer}'s Turn")
  userInputTileName.set('')
  window.mainloop()

def playerTwoTurn():
  global currentPlayer
  currentPlayer = "Player Two" 
  userTurnDisplayTk.set(f"{currentPlayer}'s Turn")
  userInputTileName.set('')
  window.mainloop()

def checkGameResult():
  status = ""
  for i in range(3):
    if tickTackToeBoard[i][0] == tickTackToeBoard[i][1] and tickTackToeBoard[i][0] == tickTackToeBoard[i][2] and tickTackToeBoard[i][0] != " _ ":
      status = "Win"
  for j in range(3):
    if tickTackToeBoard[0][j] == tickTackToeBoard[1][j] and tickTackToeBoard[0][j] == tickTackToeBoard[2][j] and tickTackToeBoard[0][j] != " _ ":
      status = "Win"
  if tickTackToeBoard[0][0] == tickTackToeBoard[1][1] and tickTackToeBoard[0][0] == tickTackToeBoard[2][2] and tickTackToeBoard[0][0] != " _ ":
    status = "Win"
  if tickTackToeBoard[0][2] == tickTackToeBoard[1][1] and tickTackToeBoard[0][2] == tickTackToeBoard[2][0] and tickTackToeBoard[0][2] != " _ ":
    status = "Win"
  if (status != "Win"):
    for i in range(3):
      for j in range(3):
        if tickTackToeBoard[i][j] == " _ ":
          status = "Not Over"
          break
        else:
          status = "Draw"
  return status

def bttnAction():
  global inputSpace
  inputSpace = userInputTileName.get()
  if currentPlayer == "Player One":
    p1Action()
  elif currentPlayer == "Player Two":
    p2Action()
  else:
    print('Error')

def clickAction(tileName):
  global inputSpace
  inputSpace = tileName
  if currentPlayer == "Player One":
    p1Action()
  elif currentPlayer == "Player Two":
    p2Action()
  else:
    print('Error')

def p1Action():
  i = -1
  j = -1
  for x in range(9):
    if inputSpace == names[x]:
      i = iList[x]
      j = jList[x]
  if i == -1 or j == -1:
    print('Error! Try Again!')
    playerOneTurn()
  if tickTackToeBoard[i][j] == " _ ":
    tickTackToeBoard[i][j] = " X "
  else:
    print("Error! Try Again!")
    playerOneTurn()
  printBoard()
  if checkGameResult() == "Win":
    userTurnDisplayTk.set(f"{currentPlayer} wins the game!")
    print('Game Over')
    userInputTileName.set('')
    userEnterBttn['state'] = 'disabled'
    resetBttn['state'] = 'enabled'
  elif checkGameResult() == "Draw":
    userTurnDisplayTk.set("Game is a Draw!")
    print("Game Over")
    userInputTileName.set('')
    userEnterBttn['state'] = 'disabled'
    resetBttn['state'] = 'enabled'
  else:
    playerTwoTurn()

def p2Action():
  i = -1
  j = -1
  for x in range(9):
    if inputSpace == names[x]:
      i = iList[x]
      j = jList[x]
  if i == -1 or j == -1:
    print('Error! Try Again!')
    playerTwoTurn()
  if tickTackToeBoard[i][j] == " _ ":
    tickTackToeBoard[i][j] = " O "
  else:
    print("Error! Try Again!")
    playerTwoTurn()
  printBoard()
  if checkGameResult() == "Win":
    userTurnDisplayTk.set(f"{currentPlayer} wins the game!")
    print("Game Over!")
    userInputTileName.set('')
    userEnterBttn['state'] = 'disabled'
    resetBttn['state'] = 'enabled'
  elif checkGameResult() == "Draw":
    userTurnDisplayTk.set("Game is a Draw!")
    print("Game Over!")
    userInputTileName.set('')
    userEnterBttn['state'] = 'disabled'
    resetBttn['state'] = 'enabled'
  else:
    playerOneTurn()

def resetFunc():
    for i in range(3):
      for j in range(3):
        tickTackToeBoard[i][j] = " _ "
    printBoard()
    print('GameBoard has been reset!')
    userEnterBttn['state'] = 'enabled'
    resetBttn['state'] = 'disabled'
    playerOneTurn()

#header
headerBox = ttk.Frame(window, width=350, height= 50, borderwidth=9, relief=tk.GROOVE)
headerBox.pack_propagate(False)
headerBox.pack()
title = ttk.Label(headerBox, text='Tic Tac Toe', font=18)
title.pack()

#GameBoard Box
gameBoard = ttk.Frame(window, width=350, height=300, borderwidth=9, relief=tk.GROOVE)
gameBoard.pack_propagate(False)
gameBoard.pack()
gameBoardDisplayTitle = ttk.Label(gameBoard, text='GameBoard')
gameBoardDisplayTitle.pack()

#gameboard squares tkinter variables
a1tk = tk.StringVar(value=tickTackToeBoard[0][0])
a2tk = tk.StringVar(value=tickTackToeBoard[1][0])
a3tk = tk.StringVar(value=tickTackToeBoard[2][0])
b1tk = tk.StringVar(value=tickTackToeBoard[0][1])
b2tk = tk.StringVar(value=tickTackToeBoard[1][1])
b3tk = tk.StringVar(value=tickTackToeBoard[2][1])
c1tk = tk.StringVar(value=tickTackToeBoard[0][2])
c2tk = tk.StringVar(value=tickTackToeBoard[1][2])
c3tk = tk.StringVar(value=tickTackToeBoard[2][2])

#gameboard squares
gameBoardCanvas = tk.Canvas(gameBoard, bg='white')
gameBoardCanvas.pack()

gameBoardCanvas.create_window((30, 70), window=ttk.Label(gameBoard, text="1", font=9))
gameBoardCanvas.create_window((30, 140), window=ttk.Label(gameBoard, text="2", font=9))
gameBoardCanvas.create_window((30, 210), window=ttk.Label(gameBoard, text="3", font=9))
gameBoardCanvas.create_window((80, 30), window=ttk.Label(gameBoard, text="A", font=9))
gameBoardCanvas.create_window((160, 30), window=ttk.Label(gameBoard, text="B", font=9))
gameBoardCanvas.create_window((240, 30), window=ttk.Label(gameBoard, text="C", font=9))

a1 = gameBoardCanvas.create_window((80, 70), window=ttk.Label(gameBoard, text="A1", font=9, textvariable=a1tk))
a2 = gameBoardCanvas.create_window((80, 140), window=ttk.Label(gameBoard, text="A2", font=9, textvariable=a2tk))
a3 = gameBoardCanvas.create_window((80, 210), window=ttk.Label(gameBoard, text="A3", font=9, textvariable=a3tk))
b1 = gameBoardCanvas.create_window((160, 70), window=ttk.Label(gameBoard, text="B1", font=9, textvariable=b1tk))
b2 = gameBoardCanvas.create_window((160, 140), window=ttk.Label(gameBoard, text="B2", font=9, textvariable=b2tk))
b3 = gameBoardCanvas.create_window((160, 210), window=ttk.Label(gameBoard, text="B3", font=9, textvariable=b3tk))
c1 = gameBoardCanvas.create_window((240, 70), window=ttk.Label(gameBoard, text="C1", font=9, textvariable=c1tk))
c2 = gameBoardCanvas.create_window((240, 140), window=ttk.Label(gameBoard, text="C2", font=9, textvariable=c2tk))
c3 = gameBoardCanvas.create_window((240, 210), window=ttk.Label(gameBoard, text="C3", font=9, textvariable=c3tk))

#userInput Tkinter variable
userTurnDisplayTk = tk.StringVar(value="Current Player")
userInputTileName = tk.StringVar()

#UserInput Box
userInput = ttk.Frame(window, width=350, height=120, borderwidth=9, relief=tk.GROOVE)
userInput.pack_propagate(False)
userInput.pack()

userTurnDisplay = ttk.Label(userInput, text="", textvariable=userTurnDisplayTk)
userTurnDisplay.pack()

userEntryBox = ttk.Entry(userInput, textvariable=userInputTileName)
userEntryBox.pack()

userEnterBttn = ttk.Button(userInput, text='Enter', command=bttnAction)
userEnterBttn.pack()

#reset bttn
resetBttn = ttk.Button(userInput, text='Reset', command=resetFunc)
resetBttn['state'] = 'disabled'
resetBttn.pack()

#events
gameBoardCanvas.tag_bind(a1,'<Button-1>', lambda event: clickAction('A1'))
gameBoardCanvas.tag_bind(a2,'<Button-1>', lambda event: clickAction('A2'))
gameBoardCanvas.tag_bind(a3,'<Button-1>', lambda event: clickAction('A3'))
gameBoardCanvas.tag_bind(b1,'<Button-1>', lambda event: clickAction('B1'))
gameBoardCanvas.tag_bind(b2,'<Button-1>', lambda event: clickAction('B2'))
gameBoardCanvas.tag_bind(b3,'<Button-1>', lambda event: clickAction('B3'))
gameBoardCanvas.tag_bind(c1,'<Button-1>', lambda event: clickAction('C1'))
gameBoardCanvas.tag_bind(c2,'<Button-1>', lambda event: clickAction('C2'))
gameBoardCanvas.tag_bind(c3,'<Button-1>', lambda event: clickAction('C3'))

printBoard()
playerOneTurn()