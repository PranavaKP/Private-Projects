#include <iostream>
using namespace std;
#include <string>
#include <cmath>

//create classes here: classes are a user defined data type that can be used in a program
//kinda like structs but structs are public by default but classes are private by default

//creating a class
/*format:
class className {
    accessSpecifier: // specifies access either public or private
    variable 1; //attribute
    variable 2; //attribute
}
*/
//example:
class myClass{
    public:
        int myNum;
        string myString;
};

//creating an object: can be created anywhere like a variable: better to create it inside main
//multiple objects of a class can be created
/*format:
className objectName;
*/
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