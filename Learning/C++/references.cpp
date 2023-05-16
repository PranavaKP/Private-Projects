#include <iostream>
using namespace std;
#include <string>
#include <cmath>
int main(){
    //a reference variable is a reference to an existing variable and it is created with a & before the name
    //example:
    string hello = "Hi"; //hello variable
    string &greeting = hello; //reference to hello variable

    //memory address: & can be used to find the memory address(where the variable is stored on a computer) if not used as a reference to a variable
    //example:
    string hello = "Bonjour";
    cout << &hello; // outputs the memory address of the variable hello in hexadecimal

}