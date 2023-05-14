#include <iostream>
using namespace std;
#include <string>

int main(){
    
    //arithmetic opperators
    int ariOpp1 = 1;
    int ariOpp2 = 2;
    cout << ariOpp1 + ariOpp2; // addition
    cout << ariOpp1 - ariOpp2; // subtraction
    cout << ariOpp1 * ariOpp2; // multiplication
    cout << ariOpp1 / ariOpp2; // division
    cout << ariOpp1 % ariOpp2; // modulus/mod
    cout << ++ariOpp1; //increases a value by one
    cout << --ariOpp2; //decreases a value by one

    /*assignment opparators*/
    int x = 5; // equal
    cout << x;
    x += 3; // adds a number(3)
    cout << x; 
    //other opperators include: -= , *=, /=, %/, &/, |/, ^=, >>=, <<= 

    //comparison opperators, used for boolean expressions
    cout << (5 == 3); // checks if equal to
    /*other comparison opperators:
        != checks if not equal to, 
        > checks if greater than,
        < checks if less than
        >= greater than or equal
        <= less than or equal*/

    //logic opperations
        // && is logical and: returns true only if both statements are true
        // || is locical or: returns true if either statements are true
        // ! is logical not: returns false if result is true

    return 0;
}