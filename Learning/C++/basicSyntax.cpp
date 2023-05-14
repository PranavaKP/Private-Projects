/*used standardly, if want to omit
line 3, then use std:: before some objects such as cout*/
#include <iostream>
using namespace std;

//for using strings
#include<string>

//write code for global variables above main function
//write code for functions above main function unlike javascript

/*main is a function that is automatically executed when program starts*/
int main() {
  
  /*cout = an object with the insertion opperator, 
  <<, to output/print stuff*/
  cout << "Hello World!";

  /* \n = new line, so next output is started on next line
  \n\n then a blank line is created
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
 
  //user input
  int userInput;
  cin >> userInput;

  /*ends the main function*/
  return 0;
}