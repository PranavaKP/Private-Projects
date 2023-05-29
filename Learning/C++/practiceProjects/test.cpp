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

string initialCoordinate;
int initialI;
int initialJ;
string pieceName;

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

int initialCheck(string &pieceName, string color);
void chessCoordsToNumeric(string coords, int &i, int &j);
void whiteTurn();
  
//main function
int main(){
  whiteTurn();
  return 0;
}

void whiteTurn(){
  cin >> initialCoordinate;
  cout << initialCheck(pieceName, "White") << "\n"; 
  cout << initialI << "\n";
  cout << initialJ << "\n";
  cout << chessBoard[initialI][initialJ];
  cout << pieceName;

}

int initialCheck(string &pieceName, string color){
  int x;
  pieceName = "null";
  chessCoordsToNumeric(initialCoordinate, initialI, initialJ);
  if(chessBoard[initialI][initialJ] != " ___ "){
    for(x = 0; x < 32; x++){
      if(pieceNameToObject.pieceName[x] == chessBoard[initialI][initialJ] && pieceNameToObject.pieceColor[x] == color){
        pieceName = chessBoard[initialI][initialJ];
        break;
      }
    }
  }
  return x;
}

void chessCoordsToNumeric(string coords, int &i, int &j){
  for(int x = 0; x < 64; x++){
    if(boardStructure.tileName[x] == coords){
      i = boardStructure.i[x];
      j = boardStructure.j[x];
    }
  }
}
