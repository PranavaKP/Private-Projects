/*used standardly, if want to omit
line 3, then use std:: before some objects such as cout*/
#include <iostream>
using namespace std;
//for using strings
#include<string>

/*a function that is automatically executed when program starts*/
int main() {
  /*cout = an object with the insertion opperator, 
  <<, to output/print stuff*/
  cout << "Hello World!";

  /* \n = new line, 
  so next output is started on next line
  if \n\n then a blank line is created
  instead of \n, end1 can be used */
  cout << "Bonjour\n";
  cout << "Hi";

  /*escape sequence examples: \n , \t = horizantal tab,
  \\ = insearts blackslash, \" = insearts double quote, and etc*/

  // outputing multiple things in one cout
  cout << "Bonjour" << "Hello!";

  //variable types
  int storesIntegers = 123;
  double storesFloatingPointNumbers = 19.99;
  float alsoStoresFloatingPointNumbers = 19.9; //but it can only store a number up to a certain amount of bytes(less than double)
  char storesSingleCharacters = 'A';
  string storesText = "Hello World";
  bool storesTrueOrFalse = true;

  //declare multiple variables
  int x = 5, y = 6, z = 50;
  cout << x + y + z;

  //one value to multi variables
  int a, b, c;
  a = b = c = 50;
  cout << a + b + c;

  //constants: keeps variables constant and it cant be changed after delcared
  const int myNum = 15;

  //sci numbers
  float sN1 = 35e3;
  double sN2 = 12E4;
  cout << sN1;
  cout << sN2;

  //bool: if true = 1 as output; if false = 0 as output
  bool trueEx = true;
  bool falseEx = false;
  cout << trueEx;
  cout << falseEx;

  //char for ASCII values
  char a = 65, b = 66, c = 67;
  cout << a; // so a = "A"
  cout << b; // so b = "B"
  cout << c; // so c = "C"

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

  /*assignment opparators, cant be used like
  cout << x = 5; */
  int x = 5; // equal
  cout << x;
  x += 3; // adds a number(3)
  cout << x; 
  //other opperators include: -= , *=, /=, %/, &/, |/, ^=, >>=, <<= 

  //comparison opperators
  bool x = (5 == 3); // checks if equal to
  cout << x;
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
 
  //user input
  int userInput;
  cin >> userInput;

  /*ends the main function*/
  return 0;
}