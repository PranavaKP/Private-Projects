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
  
//main function
int main(){
  Knight KnightPiece;
  KnightPiece.knightMovementCheck(7, 1);
  for(int x = 0; x < 8; x++){
    cout << KnightPiece.possibleI[x] << " ";
  }
  cout << "\n";
  for(int y = 0; y < 8; y++){
    cout << KnightPiece.possibleJ[y] << " ";
  }
  return 0;
}
