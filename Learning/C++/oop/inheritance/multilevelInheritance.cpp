#include <iostream>
using namespace std;
#include <string>
#include <cmath>

//multilevel inheritance: making a derived class from another derived class

//Base Class = parent
class mainClass{
    public:
        void mainFunction(){
            cout << "Something abt main function";
        }
};

//Derived class = child
class school : public mainClass{
    public:
        void schoolFunction(){
            cout << "Something abt school function";
        }
};

//Derived class = grand child
class math : public school{
    public:
        void mathFunction(){
            cout << "Something abt math function";
        }
};


int main(){

    //using multilevel inheritance
    math grade9; //creating a new object from the grand child derived class, math
    grade9.mainFunction(); //using method from parent
    grade9.schoolFunction(); //using method from child
    grade9.mathFunction(); //using method from its own class
}