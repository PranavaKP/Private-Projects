#include <iostream>
using namespace std;
#include <cmath>
#include <string>

string playerOne;
string playerTwo;
string tickTackToeBoard[3][3];

void printBoard();
void playerOneTurn();
void playerTwoTurn();
string checkGameResult();

struct {
  string names[9] = {"A1", "B1", "C1", "A2", "B2", "C2", "A3", "B3", "C3"};
  int i[9] = {0, 0, 0, 1, 1, 1, 2, 2, 2};
  int j[9] = {0, 1, 2, 0, 1, 2, 0, 1, 2};
} spacerNames;

int main() {
  cout << "Please enter the name of Player One! Player One will have the first "
          "turn. \n";
  cin >> playerOne;
  cout << "Please enter the name of Player Two! \n";
  cin >> playerTwo;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      tickTackToeBoard[i][j] = " _ ";
    }
  }
  printBoard();
  playerOneTurn();
  return 0;
}

void printBoard() {
  cout << "\nTick Tack Toe Board: \n\n";
  cout << "    A  B  C \n";
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      if (j == 0) {
        cout << " " + to_string(i + 1) + " ";
      }
      cout << tickTackToeBoard[i][j];
      if (j == 2) {
        cout << "\n";
      }
    }
  }
}

void playerOneTurn() {
  string inputSpace;
  int i;
  int j;
  cout << "\n" + playerOne + ", it is your turn to make a move!\n";
  cin >> inputSpace;

  for (int x = 0; x < 9; x++) {
    if (spacerNames.names[x] == inputSpace) {
      i = spacerNames.i[x];
      j = spacerNames.j[x];
    }
  }

  if (tickTackToeBoard[i][j] == " _ ") {
    tickTackToeBoard[i][j] = " X ";
  } else {
    cout << "\nYou have entered an invalid space. Please try again!\n";
    playerOneTurn();
  }

  printBoard();
  if (checkGameResult() == "Win") {
    cout << playerOne + " wins the game!!!\n";
  } else if (checkGameResult() == "Draw") {
    cout << "This game is a draw!!!\n";
  } else {
    playerTwoTurn();
  }
}

void playerTwoTurn() {
  string inputSpace;
  int i;
  int j;

  cout << "\n" + playerTwo + ", it is your turn to make a move!\n";
  cin >> inputSpace;

  for (int x = 0; x < 9; x++) {
    if (spacerNames.names[x] == inputSpace) {
      i = spacerNames.i[x];
      j = spacerNames.j[x];
    }
  }

  if (tickTackToeBoard[i][j] == " _ ") {
    tickTackToeBoard[i][j] = " O ";
  } else {
    cout << "\nYou have entered an invalid space. Please try again!\n";
    playerTwoTurn();
  }

  printBoard();
  if (checkGameResult() == "Win") {
    cout << playerTwo + " wins the game!!!\n";
  } else if (checkGameResult() == "Draw") {
    cout << "This game is a draw!!!\n";
  } else {
    playerOneTurn();
  }
}

string checkGameResult() {
  string status;
  for (int i = 0; i < 3; i++) {
    if (tickTackToeBoard[i][0] == tickTackToeBoard[i][1] &&
        tickTackToeBoard[i][0] == tickTackToeBoard[i][2] &&
        tickTackToeBoard[i][0] != " _ ") {
      status = "Win";
    }
  }
  for (int j = 0; j < 3; j++) {
    if (tickTackToeBoard[0][j] == tickTackToeBoard[1][j] &&
        tickTackToeBoard[0][j] == tickTackToeBoard[2][j] &&
        tickTackToeBoard[0][j] != " _ ") {
      status = "Win";
    }
  }
  if (tickTackToeBoard[0][0] == tickTackToeBoard[1][1] &&
      tickTackToeBoard[0][0] == tickTackToeBoard[2][2] &&
      tickTackToeBoard[0][0] != " _ ") {
    status = "Win";
  }
  if (tickTackToeBoard[0][2] == tickTackToeBoard[1][1] &&
      tickTackToeBoard[0][2] == tickTackToeBoard[2][0] &&
      tickTackToeBoard[0][2] != " _ ") {
    status = "Win";
  }
  if (status != "Win") {
    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
        if (tickTackToeBoard[i][j] == " _ ") {
          status = "Not Over";
          break;
        } else {
          status = "Draw";
        }
      }
    }
  }

  return status;
}
