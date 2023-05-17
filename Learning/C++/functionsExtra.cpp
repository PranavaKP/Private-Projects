#include <iostream>
using namespace std;
#include <string> 
#include <cmath>

/*function overloating: multiple functions with the same name that performs the same task but with different parameters(name, amount, type, etc) 
  if parameters aren't different then multiple functions can't have the same name
  helps prevent defining multiple functions that do the same thing as the same function name can be used to perform the same thing for different parameter cases
*/
//example:
int add(int one, int two){
    return one + two;
} 
int add(float one, float two){
    return one + two;
}
int add(double one, double two){
    return one + two;
}

//recursions: calling the function in the same function *kinda used like a loop*
int factorial(int x){
    if(x > 0){
       return x + factorial(x-1); 
    }else{
        return 0;
    }
}

int main(){
    //overloading
    add(53.1, 51.9);
    //recursions
    factorial(5);
    return 0;
}