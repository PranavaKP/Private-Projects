#include <iostream>
using namespace std;
#include <string> 
#include <cmath>

//global variables
int num1 = 5;
int num2 = 10;

//define and declare functions above main

//basic function
/*format:
    type functionName(){

    }
*/
//example:
void addTwoNumbers(){
    cout << num1 + num2;
}

//functions with parameters: args are passed through parameters which are used in function, the parameters have to be defined with a type in the function
//example:
/*format:
    type functionName(type param1){
        
    }
*/
void subtractTwoNumbers(int numberOne, int numberTwo){
    cout << numberOne - numberTwo;
}

//functions with return values: returns a certain output(can be stored in a variable), the type of the function should be the same as the type of the return value, so no void
/*format:
    type functionName(){
        return ____;
    }
*/
//example:
int multiplyTwoNumbers(int numberOne, int numberTwo){
    return numberOne*numberTwo; // returns the multiple of numberOne and numberTwo
}


//default parameter value: sets a parameter to a certain value by default if no arg passed through it
/*format:
    type functionName(type paramName = defaultValue){
        
    }
*/
//example:
void divideTwoNumbers(int numberOne, int numberTwo = 1){
    cout << numberOne / numberTwo;
}

//using reference variables: 
//a change to the parameter in the function will result to a change in the arg variable put into the parameters
//useful when the function changes the values of the parameters as its main function instead of using the parameters to calculate something else
//example:
void swapNumsWithReference(int &x, int &y){
    int z = x;
    x = y;
    y = z;
}




int main(){
   //call functions here 
    addTwoNumbers();
    subtractTwoNumbers(10,5); //10 is passed into numberOne, 5 into numberTwo
    divideTwoNumbers(21); //21 is passed into numberOne, nothing is passed into numberTwo so numberTwo is 1
    cout << multiplyTwoNumbers(5,21); //outputs the returned value of multiplyTwoNumbers to the console
    
    //reference variable functions
        int firstNumber = 5;
        int secondNumber = 10;
        cout << firstNumber << secondNumber;
        swapNumsWithReference(firstNumber, secondNumber);
        cout << firstNumber << secondNumber;
    

    return 0;
}
