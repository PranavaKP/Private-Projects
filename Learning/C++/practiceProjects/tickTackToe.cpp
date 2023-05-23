#include <iostream>
using namespace std;
#include <string>
#include <cmath>
#include <map>

string playerOne;
string playerTwo;
string tickTackToeBoard[3][3];

void printBoard();
void playerOneTurn();
void playerTwoTurn();
string checkGameResult();

int main(){
    cout << "Please enter the name of Player One! Player One will have the first turn. \n";
    cin >> playerOne;
    cout << "Please enter the name of Player Two! \n";
    cin >> playerTwo;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            tickTackToeBoard[i][j] = " _ ";
        }
    }
    printBoard();   
    playerOneTurn();
    return 0;
}

void printBoard(){
    cout << "\nTick Tack Toe: \n\n";
    cout << "    A  B  C \n";
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(j == 0){
                cout << " "+ to_string(i+1) + " ";
            }
            cout << tickTackToeBoard[i][j];
            if(j == 2){
                cout << "\n";
            }
        }
    }
}

void playerOneTurn(){
    string inputSpace;
    cout << "\n" + playerOne + ", it is your turn to make a move!\n";
    cin >> inputSpace;
    if(inputSpace == "A1" && tickTackToeBoard[0][0] == " _ "){
        tickTackToeBoard[0][0] = " X ";
    }else if(inputSpace == "B1" && tickTackToeBoard[0][1] == " _ "){
        tickTackToeBoard[0][1] = " X ";
    }else if(inputSpace == "C1" && tickTackToeBoard[0][2] == " _ "){
        tickTackToeBoard[0][2] = " X ";
    }else if(inputSpace == "A2" && tickTackToeBoard[1][0] == " _ "){
        tickTackToeBoard[1][0] = " X ";
    }else if(inputSpace == "B2" && tickTackToeBoard[1][1] == " _ "){
        tickTackToeBoard[1][1] = " X ";
    }else if(inputSpace == "C2" && tickTackToeBoard[1][2] == " _ "){
        tickTackToeBoard[1][2] = " X ";
    }else if(inputSpace == "A3" && tickTackToeBoard[2][0] == " _ "){
        tickTackToeBoard[2][0] = " X ";
    }else if(inputSpace == "B3" && tickTackToeBoard[2][1] == " _ "){
        tickTackToeBoard[2][1] = " X ";
    }else if(inputSpace == "C3" && tickTackToeBoard[2][2] == " _ "){
        tickTackToeBoard[2][2] = " X ";
    }else{
        cout << "You have entered an invalid space. Please try again!\n";
        playerOneTurn();
    }

    if(checkGameResult() == "Win"){
        cout << playerOne + " wins the game!!!\n";
    }else if(checkGameResult() == "Draw"){
        cout << "This game is a draw!!!\n";
    }else{
        printBoard();
        playerTwoTurn();
    }
}

void playerTwoTurn(){
    string inputSpace;
    cout << "\n" + playerTwo + ", it is your turn to make a move!\n";
    cin >> inputSpace;
    if(inputSpace == "A1" && tickTackToeBoard[0][0] == " _ "){
        tickTackToeBoard[0][0] = " O ";
    }else if(inputSpace == "B1" && tickTackToeBoard[0][1] == " _ "){
        tickTackToeBoard[0][1] = " O ";
    }else if(inputSpace == "C1" && tickTackToeBoard[0][2] == " _ "){
        tickTackToeBoard[0][2] = " O ";
    }else if(inputSpace == "A2" && tickTackToeBoard[1][0] == " _ "){
        tickTackToeBoard[1][0] = " O ";
    }else if(inputSpace == "B2" && tickTackToeBoard[1][1] == " _ "){
        tickTackToeBoard[1][1] = " O ";
    }else if(inputSpace == "C2" && tickTackToeBoard[1][2] == " _ "){
        tickTackToeBoard[1][2] = " O ";
    }else if(inputSpace == "A3" && tickTackToeBoard[2][0] == " _ "){
        tickTackToeBoard[2][0] = " O ";
    }else if(inputSpace == "B3" && tickTackToeBoard[2][1] == " _ "){
        tickTackToeBoard[2][1] = " O ";
    }else if(inputSpace == "C3" && tickTackToeBoard[2][2] == " _ "){
        tickTackToeBoard[2][2] = " O ";
    }else{
        cout << "You have entered an invalid space. Please try again!\n";
        playerTwoTurn();
    }

    if(checkGameResult() == "Win"){
        cout << playerTwo + " wins the game!!!\n";
    }else if(checkGameResult() == "Draw"){
        cout << "This game is a draw!!!\n";
    }else{
        printBoard();
        playerOneTurn();
    }
}

string checkGameResult(){
    return "idk";
}