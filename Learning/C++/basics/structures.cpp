#include <iostream>
using namespace std;
#include <string>
#include <cmath>


//structs group several variables into one place, each variable in a structure is a member of the structure
//example: variable name = exampleStructure : members = exampleNumb and exampleString
struct {
    int exampleNumb;
    string exampleString;
} exampleStructure; //variables need to be created with the structure itself

//creating multiple variables from one structure(use a , between the variable names): variable name = struct1, struct2, struct3 : members = number, string
struct{
    int number;
    string string;
}struct1, struct2, struct3; //variables need to be created with the structure itself

//giving a name to a structure allows a variable to be created with a structure type that mimics the wanted structure
//the variable type would be the name of the structure
//works kinda like classes
struct aStructure{
    int number;
    string string;
};

//creating variables from defined structure
aStructure newStructVar1;

int main(){
    //access structure members(use . after struct name)
    exampleStructure.exampleNumb = 1;
    exampleStructure.exampleString = "Hi";
    cout << exampleStructure.exampleNumb << exampleStructure.exampleString; //can only output a member in a struct and not the struct
    
    //creating variables from defined structures in the main function
    aStructure newStructVar;
}