#include <iostream>
using namespace std;
#include <string>
#include <cmath>

int main(){

    //multi dimensional arrays are arrays with multiple arrays within: helps create a form of structure, for example with 2d arrays one can be a row while other can be a column

    //example1:
    int numbers[3][5] = {
        {1,2,3,4,5},
        {6,7,8,9,10},
        {11,12,13,14,15}
    };

    //example2:
    string twoFourSquares[2][2][2] = {
        {
            {"s1q1", "s1q2"},
            {"s1q3", "s1q4"}
        },
        {
            {"s2q1", "s2q2"},
            {"s2q3", "s2q4"}
        }
    };


    //accessing elements in multi dimensional arrays
    cout << twoFourSquares[0][0][0]; //will output "s1q2"

    //change elements of a multi dimensional array
    numbers[1][4] = 21;

    //looping through a multi dimentional array: use a loop inside another loop
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 5; j++){
            cout << numbers[i][j];
        }
    }

    return 0;
}