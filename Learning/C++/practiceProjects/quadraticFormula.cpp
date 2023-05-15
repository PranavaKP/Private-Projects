#include <iostream>
using namespace std;
#include <string>
#include <cmath>

//global variables
char yesNo;
int a;
int b;
int c;
int rootOne;
int rootTwo;

//declare functions
void startUpFunction();
void calculateFunction();


int main(){
    cout << "This is a program that calculates the real roots of a quadratic function\n";
    startUpFunction();
    if(yesNo == 'Y'){
        calculateFunction();
    }else if(yesNo == 'N'){
        startUpFunction();
    }else{
        cout << "Error! Resetting!";
        startUpFunction();
    }
    return 0;
}

//functions
void startUpFunction(){
  cout << "Please enter in the coffeciant of the x^2 term\n";
  cin >> a;
  cout << "Please enter in the coffeciant of the x term\n";
  cin >> b;
  cout << "Please enter in the value of the constant term\n";
  cin >> c;
  string termOne = to_string(a) + "x^2 ";
  string termTwo = to_string(b) + "x ";
  string termThree = to_string(c);
  cout << "Do you want to calculate the roots of the equation:" << " " + termOne + " + " + termTwo + " + " + termThree << "\nY/N\n";
  cin >> yesNo;
}

void calculateFunction(){
  int d = pow(b, 2) - (4*a*c); 
  if(!(d < 0)){
    rootOne = ((-b + sqrt(d))/(2*a));
    rootTwo = ((-b - sqrt(d))/(2*a));
    cout << "The first root is:" << rootOne << "\nThe second root is:" << rootTwo << "\n";
  }else{
    cout << "This equation has no real roots!!!";
  }
}