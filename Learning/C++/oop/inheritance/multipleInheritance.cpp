#include <iostream>
using namespace std;
#include <string>
#include <cmath>

//multiple inheritance: inherting attributes from multiple classes

class mainClass1{
    public:
        void mainClassFunction1(){
            cout << "mainClassFunction1 \n";
        }
};

class mainClass2{
    public:
        void mainClassFunction2(){
            cout << "mainClassFunction2 \n";
        }
};

class derivedClass : public mainClass1, public mainClass2{
    //code
};

int main(){
    derivedClass object; //creating object
    object.mainClassFunction1(); //using attribute from first base class
    object.mainClassFunction2(); //using attribute from second base class
}