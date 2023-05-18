#include <iostream>
using namespace std;
#include <string>
#include <cmath>

//methords are functions in classes *remember how classes can have more than just variables while struct can only store variables*
//using methods in classes: just define a function in the class

//example:
class arithmeticCalculator{
    public:
        //method attributes declared and defined in class
        int addition(int x,int y){
            return x + y;
        }
        int subtraction(int x, int y){
            return x - y;
        }

        //method attributes dclared in class and defined outside of class
        int multiplication(int x, int y);
        int division(int x, int y);

};

//method attributes defined outside of class
int arithmeticCalculator::multiplication(int x, int y){
    return x*y;
}
int arithmeticCalculator::division(int x, int y){
    return x/y;
}



int main(){
    arithmeticCalculator questionOne; //Create an object of the class
    cout << questionOne.addition(5,16);
    cout << questionOne.multiplication(3,10);
    return 0;
}