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

    //pointer: a variable that stores the memory address as its value, created with the * opperator after the variable type: the pointer and main variable have to be the same type
    //example:
    string food = "Pizza";
    string* ptr = &food;
    cout << food; //outputs "Pizza"
    cout << &food; //outputs memory address of food
    cout << ptr; //outputs the memory address of food with the pointer

    //deference: output the value of main variable with the pointer: * is used before the pointer variable
    string candy = "Chocolate";
    string* ptr = &candy;
    cout << ptr; //reference: outputs memory address of candy
    cout << *ptr; //deference: outputs the value of candy


}