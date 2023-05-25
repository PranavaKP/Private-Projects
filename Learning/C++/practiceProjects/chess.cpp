#include <iostream>
using namespace std;
#include <string>
#include <cmath>

class BoardPieces{
    public:
        string pieceName;
        string color;
        int possibleI;
        int possibleJ;
        BoardPieces(string x, string y){
            pieceName = x;
            color = y;
        }
        void movementCheck(int i, int j){
            //empty check
        }
};

class Pawn : public BoardPieces{
    public:
        int possibleI[3];
        int possibleJ[3];
        void movementCheck(int i, int j){
            if(chessBoard[i+1][j] == " ___ "){
                possibleI[0] = i + 1;
                possibleJ[0] = j;
            }
            if(chessBoard[i+1][j+1] != " ___ "){
                possibleI[1] = i+1;
                possibleJ[1] = j+1;
            }
            if(chessBoard[i+1][j-1] != " ___ "){
                possibleI[2] = i+1;
                possibleJ[2] = j-1;
            }
        }
};

class Rook  : public BoardPieces{
    public:
        int possibleI[14];
        int possibleJ[14];
        void movementCheck(int i, int j){
            for(int x = 0; x < 7; x++){
                if(x != i &&  chessBoard[x][j] == " ___ "){
                    possibleI[x] = x;
                    possibleJ[x] = j;
                }
            }
            for(int y = 7; y < 14; y++){
                if(y != j &&  chessBoard[i][y] == " ___ "){
                    possibleI[y] = i;
                    possibleJ[y] = y;
                }
            }
        }
};

class Knight  : public BoardPieces{
    public:
        void movementCheck(int i, int j){
            int possibleI[8];
            int possibleJ[8];
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
        void movementCheck(int i, int j){
            int possibleI[];
            int possibleJ[];
            for(int x = i; i > 0; i--){
                for(int y = j; j > 0; j--){


                }
            }
            for(int x = i; i > 0; i--){
                for(int y = j; j < 7; j++){
                    

                }
            }
            for(int x = i; i < 7; i++){
                for(int y = j; j > 0; j--){
                    

                }
            }
            for(int x = i; i < 7; i++){
                for(int y = j; j < 7; j++){
                    

                }
            }
        }
};

class Queen  : public BoardPieces{
    public:
        int possibleI[];
        int possibleJ[];
        void movementCheck(int i, int j){
            //rook movement
            for(int x = 0; x < 7; x++){
                if(x != i &&  chessBoard[x][j] == " ___ "){
                    possibleI[x] = x;
                    possibleJ[x] = j;
                }
            }
            for(int y = 7; y < 14; y++){
                if(y != j &&  chessBoard[i][y] == " ___ "){
                    possibleI[y] = i;
                    possibleJ[y] = y;
                }
            }
            //bishop movement
        }
};

class King  : public BoardPieces{
    public:
        int possibleI[8];
        int possibleJ[8];
        void movementCheck(){
            //king movement check
        }
};

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
}tilesPosition;

void captureCheck();
void whiteTurn();
void blackTurn();
void printWhiteBoard();
void printBlackBoard();
void kingCheck();

string chessBoard[8][8];

int main(){
    return 0;
}



