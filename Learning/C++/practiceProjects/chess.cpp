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
    {" WR1 ", " WN1 ", " WB1 ", " WQ0 ", " WK0 ", " WB2 ", " WN2 ", " WR2 "}
};

//objects and classes
class Pawn{
  private:
    //functions used for movement check
    void exceptionSetter(int index){
        possibleI[index] = -1;
        possibleJ[index] = -1;
    }
    void verticalMovement(int i, int j){
      if(chessBoard[i][j] == " ___ "){
        possibleI[0] = i;
        possibleJ[0] = j;
      }else{
        exceptionSetter(0);
      }
    }
    void diagonalMovement1(int i, int j){
      if(chessBoard[i][j] != " ___ " && j < 8){
        possibleI[1] = i;
        possibleJ[1] = j;
      }else{
        exceptionSetter(1);
      }
    }
    void diagonalMovement2(int i, int j){
      if(chessBoard[i][j] != " ___ " && j > -1){
        possibleI[2] = i;
        possibleJ[2] = j;
      }else{
        exceptionSetter(2);
      }
    }
  public:
    //possible coords
    int possibleI[3];
    int possibleJ[3];
    //functions to calculate possible coords
    void blackMovementCheck(int i, int j){
            verticalMovement(i + 1, j);  
            diagonalMovement1(i + 1, j + 1);
            diagonalMovement2(i + 1, j - 1);
          }
    void whiteMovementCheck(int i, int j){
              verticalMovement(i - 1, j);
              diagonalMovement1(i - 1, j + 1);
              diagonalMovement2(i - 1, j - 1);
          }
};

class Rook{
    private:
        //variables and functions used to calculate possible coords
        int index = 0;
        bool status;
        void verticalCheck(int x, int j){
          if(chessBoard[x][j] == " ___ "){
            verticalSet(x, j);
          }else{
            verticalSet(x, j);
            status = 0;
          }
        }
        void horizontalCheck(int i, int y){
          if(chessBoard[i][y] == " ___ "){
            horizontalSet(i, y);
          }else{
            horizontalSet(i, y);
            status = 0;
          }
        }
        void verticalSet(int x, int j){
          if(status == 1){
            possibleI[index] = x;
            possibleJ[index] = j; 
          }else{
            possibleI[index] = -1;
            possibleJ[index] = -1; 
          }
          index++;
        }
        void horizontalSet(int i, int y){
          if(status == 1){
            possibleI[index] = i;  
            possibleJ[index] = y; 
          }else{
            possibleI[index] = -1;  
            possibleJ[index] = -1;
          }
          index++;
        }

    public:
        //possible coords
        int possibleI[14];
        int possibleJ[14];
        //function to identify possible coords
        void rookMovementCheck(int i, int j){     
          status = 1;
          for(int x = i+1; x < 8; x++){  
            verticalCheck(x, j);
          }
          status = 1;
          for(int x = i-1; x > -1; x--){
            verticalCheck(x, j);
          }
          status = 1;
          for(int y = j+1; y < 8; y++){
            horizontalCheck(i, y);
          }
          status = 1;
          for(int y = j-1; y > -1; y--){
            horizontalCheck(i, y);
          }
        }
};

class Knight{
  private:
    //functions used in the function for finding possible coords
    void compareValue(int i, int j, int index){
      if(i >= 0 && i < 8 && j >= 0 && j < 8){
        setValue(i, j, index);
      }else{
        setValue(-1, -1, index);
      }
    }
    void setValue(int i, int j, int index){
      possibleI[index] = i;
      possibleJ[index] = j;
    }
  public:
    //possible coords
    int possibleI[8];
    int possibleJ[8];
    //function used to find possible coords
    void knightMovementCheck(int i, int j){
      compareValue(i + 2, j + 1, 0);
      compareValue(i + 1, j + 2, 1);
      compareValue(i + 2, j - 1, 2);
      compareValue(i + 1, j - 2, 3);
      compareValue(i - 2, j - 1, 4);
      compareValue(i - 1, j - 2, 5);
      compareValue(i - 2, j + 1, 6);
      compareValue(i - 1, j + 2, 7);
    }
};

class Bishop{
    private:
        //functions and variables used in func to find possible coords
        int index = 0;
        bool status;
        int x;
        int y;
        void exceptionSetter(){
            possibleI[index] = -1;
            possibleJ[index] = -1;
        }
        void reset(int i, int j){
          status = 1;
          x = i;
          y = j;
        }
        void checkValues(int x, int y){
              if(chessBoard[x][y] == " ___ "){
                setValues(x, y);
              }else{
                setValues(x, y);
                status = 0;
              }
        }
        void setValues(int x, int y){
          if(status == 1){
            possibleI[index] = x;
            possibleJ[index] = y; 
          }else{
            exceptionSetter();
          }
          index++;
        }
    public:
        //possible coords
        int possibleI[13];
        int possibleJ[13];
        //func to find possible coords
        void bishopMovementCheck(int i, int j){
          reset(i, j);
          while(x > 0 && y > 0){
            checkValues(x - 1, y - 1);
            x--;
            y--;
          }
          reset(i, j);
          while(x > 0 && y < 7){
            checkValues(x - 1, y + 1);
            x--;
            y++;
          }
          reset(i, j);
          while(x < 7 && y > 0){
            checkValues(x + 1, y - 1);
            x++;
            y--;
          }
          reset(i, j);
          while(x < 7 && y > 0){
            checkValues(x + 1, x + 1);
            x++;
            x--;
          }
          if(index != 12){
            for(int a = index; a < 13; a++){
                exceptionSetter();
            }
          }
        
        }

};

class Queen{
    public:
    int possibleI[27];
    int possibleJ[27];
    void queenMovementCheck(int i, int j){

    }
};

class King{
    public:
        //possible coords
        int possibleI[8];
        int possibleJ[8];
        //func used to find possible coords
        void kingMovementCheck(int i, int j){
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

//board structures
struct {
    //name of the tiles
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
    //i value for each tile
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
    //j value for each tile
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

struct{
  //name of all pieces
  string pieceName[32] = {" BP8 ", " BP7 ", " BP6 ", " BP5 ", " BP4 ", " BP3 ", " BP2 ", " BP1 ",
                          " WP1 ", " WP2 ", " WP3 ", " WP4 ", " WP5 ", " WP6 ", " WP7 ", " WP8 ",
                          " BR2 ", " BN2 ", " BB2 ", " BQ0 ", " BK0 ", " BB1 ", " BN1 ", " BR1 "
                          " WR1 ", " WN1 ", " WB1 ", " WQ0 ", " WK0 ", " WB2 ", " WN2 ", " WR2 "};
  //piece type number classification
  int pieceClassification[32] = {0 , 0 , 0 , 0 , 0 , 0 , 0 , 0,
                                 1 , 1 , 1 , 1 , 1 , 1 , 1 , 1,
                                 2 , 3 , 4 , 5 , 6 , 4 , 3 , 2,
                                 2 , 3 , 4 , 5 , 6 , 4 , 3 , 2,};
  //piece color classification
  string pieceColor[32] = {"Black", "Black", "Black", "Black", "Black", "Black", "Black", "Black",
                           "White", "White", "White", "White", "White", "White", "White", "White",
                           "Black", "Black", "Black", "Black", "Black", "Black", "Black", "Black",
                           "White", "White", "White", "White", "White", "White", "White", "White"};
}pieceNameToObject;

//global variables
string initialCoordinate;
string terminalCoordinate;
string pieceName;
string currentColor;
string oppColor;
int objNumberIndex;
int initialI;
int initialJ;
int terminalI;
int terminalJ;

//decleration of functions
void whiteTurn();
void blackTurn();
void printWhiteBoard();
void printBlackBoard();
int initialCheck(string &pieceName, string color);
void terminalCheck();
void switchCaseCheck(int maxX, int arrayI[], int arrayJ[]);
void chessCoordsToNumeric(string coords, int &i, int &j);
bool kingCheck(string kingName);
void movePiece();
void captureCheck();

//main function
int main(){
    cout << "Starting the game... \n";
    whiteTurn();
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

bool kingCheck(string kingName){
    bool alive = 0;
    for(int i = 0; i > 8; i++){
        for(int j = 0; j > 8; j++){
            if(chessBoard[i][j] == kingName){
                alive = 1;
            }
        }
    }
    return alive;
}

void whiteTurn(){
    currentColor = "White";
    oppColor = "Black";
    cout << "It is white's turn!\n";
    printWhiteBoard();
    cout << "Please enter the coordinates of piece you want to move...\n";
    cin >> initialCoordinate;
    objNumberIndex = initialCheck(pieceName, currentColor);
    if(pieceName == "null"){
      cout << "You have entered the coordinates for an unvalid piece... Please try again!\n";
      whiteTurn();
    }else{
      cout << "You are about to move the piece..." << pieceName << "\n";
      cout << "Please enter the coordinates of the tile you want to move your piece...\n";
      cin >> terminalCoordinate;
      terminalCheck();
      if(terminalI == -1 || terminalJ == -1){
        cout << "You have moved your piece to an invalid space...Please try again!";
        whiteTurn();
      }else{
        movePiece();
        if(kingCheck(" BK0 ") == 1){
            cout << "You have moved..." << "" << "to the coordinate..." << terminalCoordinate << "\n";
            printWhiteBoard();
            blackTurn();
        }else{
            cout << "Checkmate, white wins!";
        }
      }

    }
}

void blackTurn(){
    currentColor = "Black";
    oppColor = "White";
    cout << "It is black's turn!\n";
    printBlackBoard();
    cout << "Please enter the coordinates of piece you want to move...\n";
    cin >> initialCoordinate;
    objNumberIndex = initialCheck(pieceName, currentColor);
    if(pieceName == "null"){
      cout << "You have entered the coordinates for an unvalid piece... Please try again!\n";
      blackTurn();
    }else{
      cout << "You are about to move the piece..." << pieceName << "\n";
      cout << "Please enter the coordinates of the tile you want to move your piece...\n";
      cin >> terminalCoordinate;
      terminalCheck();
      if(terminalI == -1 || terminalJ == -1){
        cout << "You have moved your piece to an invalid space...Please try again!";
        blackTurn();
      }else{
        movePiece();
        if(kingCheck(" WK0 ") == 1){
            cout << "You have moved..." << "" << "to the coordinate..." << terminalCoordinate << "\n";
            printBlackBoard();
            whiteTurn();
        }else{
            cout << "Checkmate, black wins!";
        }
      }

    }
}

int initialCheck(string &pieceName, string color){
  chessCoordsToNumeric(initialCoordinate, initialI, initialJ);
  if(chessBoard[initialI][initialJ] != " ___ "){
    for(int x = 0; x < 32; x++){
      if(pieceNameToObject.pieceName[x] == pieceName && pieceNameToObject.pieceColor[x] == color){
        pieceName = chessBoard[initialI][initialJ];
        return x;
      }else{
        pieceName = "null";
        return -1;
      }
    }
  }
  pieceName = "null";
  return -1;
}

void terminalCheck(){
  int objNumber;
  chessCoordsToNumeric(terminalCoordinate, terminalI, terminalJ);
  objNumber = pieceNameToObject.pieceClassification[objNumberIndex];
  if(objNumber == 0){
    Pawn BlackPawn;
    BlackPawn.blackMovementCheck(initialI, initialJ);
    switchCaseCheck(3, BlackPawn.possibleI, BlackPawn.possibleJ);
  }else if(objNumber == 1){
    Pawn WhitePawn;
    WhitePawn.whiteMovementCheck(initialI, initialJ);
    switchCaseCheck(3, WhitePawn.possibleI, WhitePawn.possibleJ);
  }else if(objNumber == 2){
    Rook RookPiece;
    RookPiece.rookMovementCheck(initialI, initialJ);
    switchCaseCheck(14, RookPiece.possibleI, RookPiece.possibleJ);
  }else if(objNumber == 3){
    Knight KnightPiece;
    KnightPiece.knightMovementCheck(initialI, initialJ);
    switchCaseCheck(8, KnightPiece.possibleI, KnightPiece.possibleJ);
  }else if(objNumber == 4){
    Bishop BishopPiece;
    BishopPiece.bishopMovementCheck(initialI, initialJ);
    switchCaseCheck(13, BishopPiece.possibleI, BishopPiece.possibleJ);
  }else if(objNumber == 5){
    Queen QueenPiece;
    QueenPiece.queenMovementCheck(initialI, initialJ);
    switchCaseCheck(27, QueenPiece.possibleI, QueenPiece.possibleJ);
  }else if(objNumber == 6){
    King KingPiece;
    KingPiece.kingMovementCheck(initialI, initialJ);
    switchCaseCheck(8, KingPiece.possibleI, KingPiece.possibleJ);
  }else{
    terminalI = -1;
    terminalJ = -1;
  }
}

void switchCaseCheck(int maxX, int arrayI[], int arrayJ[]){
  for(int x = 0; x < maxX; x++){
    if(arrayI[x] == terminalI && arrayJ[x] == terminalJ){
      captureCheck();
      break;
    }
  }
}

void captureCheck(){
  string terminalTileName = chessBoard[terminalI][terminalJ];
  if(terminalTileName != " ___ "){
    for(int x = 0; x < 32; x++){
      if(pieceNameToObject.pieceName[x] == terminalTileName){
        if(pieceNameToObject.pieceColor[x] != oppColor){
          terminalI = -1;
          terminalJ = -1;
        }
      }
    }
  }

}

void movePiece(){
  chessBoard[initialI][initialJ] = " ___ ";
  chessBoard[terminalI][terminalJ] = pieceName;
}

void chessCoordsToNumeric(string coords, int &i, int &j){
  for(int x = 0; x < 64; x++){
    if(boardStructure.tileName[x] == coords){
      i = boardStructure.i[x];
      j = boardStructure.j[x];
    }
  }
}