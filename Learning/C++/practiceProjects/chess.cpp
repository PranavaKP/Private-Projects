#include <iostream>
using namespace std;
#include <string>
#include <cmath>

//main chess board 
string chessBoard[8][8] = {
    {" BR2 ", " BN2 ", " BB2 ", " BQ0 ", " BK0 ", " BB1 ", " BN1 ", " BR1 "},
    {" BP8 ", " BP7 ", " BP6 ", " BP5 ", " BP4 ", " BP3 ", " BP2 ", " BP1 "},
    {" ___ ", " ___ ", " ___ ", " ___ ", " ___ ", " ___ ", " ___ ", " ___ "},
    {" ___ ", " ___ ", " ___ ", " ___ ", " ___ ", " ___ ", " ___ ", " ___ "},
    {" ___ ", " ___ ", " ___ ", " ___ ", " ___ ", " ___ ", " ___ ", " ___ "},
    {" ___ ", " ___ ", " ___ ", " ___ ", " ___ ", " ___ ", " ___ ", " ___ "},
    {" WP1 ", " WP2 ", " WP3 ", " WP4 ", " WP5 ", " WP6 ", " WP7 ", " WP8 "},
    {" WR1 ", " WN1 ", " WB1 ", " WQ0 ", " WK0 ", " WB2 ", " WN2 ",  " WR2 "}
};

//objects and classes

class BoardPieces{
    public:
        string pieceName;
        string color;
        int possibleI;
        int possibleJ;
        void blackMovementCheck(int i, int j){
            //empty check
        }
        void whiteMovementCheck(int i, int j){
            //empty check
        }
        void commonMovementCheck(int i, int j){
        }
};

class Pawn : public BoardPieces{
    public:
        int possibleI[3];
        int possibleJ[3];
        Pawn(string x, string y){
            pieceName = x;
            color = y;
        }
        void blackMovementCheck(int i, int j){
            if(chessBoard[i+1][j] == " __ "){
                possibleI[0] = i + 1;
                possibleJ[0] = j;
            }
            if(chessBoard[i+1][j+1] != " __ "){
                possibleI[1] = i+1;
                possibleJ[1] = j+1;
            }
            if(chessBoard[i+1][j-1] != " __ "){
                possibleI[2] = i+1;
                possibleJ[2] = j-1;
            }
        }
        void whiteMovementCheck(int i, int j){
            if(chessBoard[i-1][j] == " __ "){
                possibleI[0] = i - 1;
                possibleJ[0] = j;
            }
            if(chessBoard[i-1][j+1] != " __ "){
                possibleI[1] = i-1;
                possibleJ[1] = j+1;
            }
            if(chessBoard[i-1][j-1] != " __ "){
                possibleI[2] = i-1;
                possibleJ[2] = j-1;
            }  
        }
};

class Rook  : public BoardPieces{
    public:
        int possibleI[14];
        int possibleJ[14];
        Rook(string x, string y){
            pieceName = x;
            color = y;
        }
        void commonMovementCheck(int i, int j){
            for(int x = 0; x < 7; x++){
                if(x != i &&  chessBoard[x][j] == " __ "){
                    possibleI[x] = x;
                    possibleJ[x] = j;
                }
            }
            for(int y = 7; y < 14; y++){
                if(y != j &&  chessBoard[i][y] == " __ "){
                    possibleI[y] = i;
                    possibleJ[y] = y;
                }
            }
        }
};

class Knight  : public BoardPieces{
    public:
        int possibleI[8];
        int possibleJ[8];
        Knight(string x, string y){
            pieceName = x;
            color = y;
        }
        void commonMovementCheck(int i, int j){
            if(i+2 >= 0 && i+2 < 8 && j+1 >= 0 && j+1 < 8){
                possibleI[0] = i + 2;
                possibleJ[0] = j + 1;
            }
            if(i+1 >= 0 && i+1 < 8 && j+2 >= 0 && j+2 < 8){
                possibleI[1] = i + 1;
                possibleJ[1] = j + 2;
            }
            if(i+2 >= 0 && i+2 < 8 && j-1 >= 0 && j-1 < 8){
                possibleI[2] = i + 2;
                possibleJ[2] = j - 1;
            }
            if(i+1 >= 0 && i+1 < 8 && j-2 >= 0 && j-2 < 8){
                possibleI[3] = i + 1;
                possibleJ[3] = j - 2;
            }
            if(i-2 >= 0 && i-2 < 8 && j-1 >= 0 && j-1 < 8){
                possibleI[4] = i - 2;
                possibleJ[4] = j - 1;
            }
            if(i-1 >= 0 && i-1 < 8 && j-2 >= 0 && j-2 < 8){
                possibleI[5] = i - 1;
                possibleJ[5] = j - 2;
            }
            if(i-2 >= 0 && i-2 < 8 && j+1 >= 0 && j+1 < 8){
                possibleI[6] = i - 2;
                possibleJ[6] = j + 1;
            }
            if(i-1 >= 0 && i-1 < 8 && j+2 >= 0 && j+2 < 8){
                possibleI[7] = i - 1;
                possibleJ[7] = j + 2;
            }
        }
};

class Bishop  : public BoardPieces{
    public:
         int possibleI[13];
        int possibleJ[13];
        Bishop(string x, string y){
            pieceName = x;
            color = y;
        }
        void commonMovementCheck(int i, int j){
            int index = 0;
            for(int x = i; i > 0; i--){
                for(int y = j; j > 0; j--){
                    possibleI[index] = x;
                    possibleJ[index] = y;
                    index++;
                }
            }
            for(int x = i; i > 0; i--){
                for(int y = j; j < 7; j++){
                    possibleI[index] = x;
                    possibleJ[index] = y;
                    index++;  
                }
            }
            for(int x = i; i < 7; i++){
                for(int y = j; j > 0; j--){
                    possibleI[index] = x;
                    possibleJ[index] = y;
                    index++;
                }
            }
            for(int x = i; i < 7; i++){
                for(int y = j; j < 7; j++){
                    possibleI[index] = x;
                    possibleJ[index] = y;
                    index++;
                }
            }
        }
};

class Queen  : public BoardPieces{
    public:
        int possibleI[27];
        int possibleJ[27];
        int index = 0;
        Queen(string x, string y){
            pieceName = x;
            color = y;
        }
        void commonMovementCheck(int i, int j){
            //rook movement
            for(int x = 0; x < 7; x++){
                if(x != i &&  chessBoard[x][j] == " __ "){
                    possibleI[x] = x;
                    possibleJ[x] = j;
                }
            }
            for(int y = 7; y < 14; y++){
                if(y != j &&  chessBoard[i][y] == " __ "){
                    possibleI[y] = i;
                    possibleJ[y] = y;
                }
            }
            //bishop movement
            for(int x = i; i > 0; i--){
                for(int y = j; j > 0; j--){
                    possibleI[index] = x;
                    possibleJ[index] = y;
                    index++;
                }
            }
            for(int x = i; i > 0; i--){
                for(int y = j; j < 7; j++){
                    possibleI[index] = x;
                    possibleJ[index] = y;
                    index++;  
                }
            }
            for(int x = i; i < 7; i++){
                for(int y = j; j > 0; j--){
                    possibleI[index] = x;
                    possibleJ[index] = y;
                    index++;
                }
            }
            for(int x = i; i < 7; i++){
                for(int y = j; j < 7; j++){
                    possibleI[index] = x;
                    possibleJ[index] = y;
                    index++;
                }
            }
        }
};

class King  : public BoardPieces{
    public:
        int possibleI[8];
        int possibleJ[8];
        King(string x, string y){
            pieceName = x;
            color = y;
        }
        void commonMovementCheck(int i, int j){
            possibleI[0] = i + 1;
            possibleJ[0] = j;
            possibleI[1] = i + 1;
            possibleJ[1] = j + 1;
            possibleI[2] = i + 1;
            possibleJ[2] = j - 1;
            possibleI[3] = i;
            possibleJ[3] = j + 1;
            possibleI[4] = i;
            possibleJ[4] = j - 1;
            possibleI[5] = i - 1;
            possibleJ[5] = j;
            possibleI[6] = i - 1;
            possibleJ[6] = j - 1;   
            possibleI[7] = i - 1;
            possibleJ[7] = j + 1;
        }
};

//board structure
struct {
    string tileName[64] = {
        "A8", "B8", "C8", "D8", "E8", "F8", "G8", "H8",
        "A7", "B7", "C7", "D7", "E7", "F7", "G7", "H7",
        "A5", "B5", "C5", "D5", "E5", "F5", "G5", "H5",
        "A6", "B6", "C6", "D6", "E6", "F6", "G6", "H6",
        "A4", "B4", "C4", "D4", "E4", "F4", "G4", "H4",
        "A3", "B3", "C3", "D3", "E3", "F3", "G3", "H3",
        "A2", "B2", "C2", "D2", "E2", "F2", "G2", "H2",
        "A1", "B1", "C1", "D1", "E1", "F1", "G1", "H1"
    };
    int i[64] = {
        0,0,0,0,0,0,0,0,
        1,1,1,1,1,1,1,1,
        2,2,2,2,2,2,2,2,
        3,3,3,3,3,3,3,3,
        4,4,4,4,4,4,4,4,
        5,5,5,5,5,5,5,5,
        6,6,6,6,6,6,6,6,
        7,7,7,7,7,7,7,7
    };
    int j[64] = {
        0,1,2,3,4,5,6,7,
        0,1,2,3,4,5,6,7,
        0,1,2,3,4,5,6,7,
        0,1,2,3,4,5,6,7,
        0,1,2,3,4,5,6,7,
        0,1,2,3,4,5,6,7,
        0,1,2,3,4,5,6,7,
        0,1,2,3,4,5,6,7,
    };
}boardStructure;

//decleration of functions
void captureCheck();
void whiteTurn();
void blackTurn();
void printWhiteBoard();
void printBlackBoard();
void declarePieces();
string kingCheck(string kingName);

//main function
int main(){
    printWhiteBoard();
    printBlackBoard();
    return 0;
}

//definition of functions
void printWhiteBoard(){
    cout << "\nWhite's POV: \n\n";
    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            if(j == 0){
                cout << " "+ to_string(8 - i) + " ";
            }
            cout << chessBoard[i][j];
            if(j == 7){
                cout << "\n";
            }
        }
    }
    cout << "    A    B    C    D    E    F    G    H\n";
}

void printBlackBoard(){
    cout << "\nBlack's POV: \n\n";
    for(int i = 7; i >= 0; i--){
        for(int j = 7; j >= 0; j--){
            if(j == 7){
                cout << " "+ to_string(8 - i) + " ";
            }
            cout << chessBoard[i][j];
            if(j == 0){
                cout << "\n";
            }
        }
    }
    cout << "    H    G    F    E    D    C    B    A\n";
}

string kingCheck(string kingName){
    string status = "Not Alive";
    for(int i = 0; i > 8; i++){
        for(int j = 0; j > 8; j++){
            if(chessBoard[i][j] == kingName){
                status = "Alive";
            }
        }
    }
    return status;
}
