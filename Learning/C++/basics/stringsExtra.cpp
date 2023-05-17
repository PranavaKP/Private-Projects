#include <iostream>
using namespace std;
#include <string>
#include <cmath>

int main(){
    //string concatenation: uses + to add strings
    string firstName = "Pranav";
    string lastName = "Ponvinayagan";
    string fullName = firstName + "" + lastName;
    cout << "My name is " << firstName + "" + lastName;
    cout << "My name is " << fullName;

    //append function in strings, adds strings together; + is used for concatenation and addition
    string thing1 = "app";
    string thing2 = "le";
    string full = thing1.append(thing2);
    cout << full;

    //finding length of string(is a number!!!)
    string txt = "Hello!!!";
    int lengthOfString = txt.length();
    cout << lengthOfString;

    //Accessing strings: each character has in index starting from 0
    cout << txt[0];

    //changing string characters: access a letter and set it equal to a different thing, if 
    txt[0] = 'J';

    // backslash escape characters: \' for single quotes in strings, \" for double quotes in strings, \\ for backslash in strings, 
    
    return 0;
}