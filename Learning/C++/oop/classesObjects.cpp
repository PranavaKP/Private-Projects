#include <iostream>
using namespace std;
#include <string>
#include <cmath>

//create classes here: classes are a user defined data type that can be used in a program
//kinda like structs but structs are public by default but classes are private by default
//also, structs only store user defined data types, but a lot more can be done with classes

//creating a class
//example:
class myClass{
    public:
        int myNum;
        string myString;
};

//creating an object: can be created anywhere like a variable: better to create it inside main
//multiple objects of a class can be created
//example:
myClass myObjOutside;

int main(){
    //creating objects inside main
    myClass myObj;

    //accessing attribuetes and setting values for each object(use . after object to access its attributes)
    myObj.myNum = 5;
    myObj.myString = "Hello";

    //attributes of objects are like variables that belong to that object
    
    //printing attributes
    cout << myObj.myNum;

}