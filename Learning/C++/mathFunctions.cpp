#include <iostream>
using namespace std;
#include <string>
#include <cmath>

int main(){
    //math functions * need to use #include <cmath> *
    int x = 5;
    double n = 5.9;
    int y = 1;
    int z = 4;
    cout << abs(x); //abolute value
    cout << acos(x); //arc cosine
    cout << asin(x); //acr sine
    cout << atan(x); //arc tan
    cout << sqrt(x); //square root
    cout << cbrt(x); //cuberoot
    cout << ceil(n); //round up to next int
    cout << cos(x); //cosine(rad)
    cout << sin(x); //sine(rad)
    cout << tan(x); //tangent(rad)
    cout << cosh(x); //returns hyperbolic cosine
    cout << sinh(x); //returns hyperbolic sin
    cout << tanh(x); //returns hyperbolic tan
    cout << exp(x); //E^x
    cout << expm1(x); //e^x - 1
    cout << fabs(n); //abs value of floating number
    cout << fdim(x,y); //pos difference between x and y
    cout << floor(x); //round down to nearest integer
    cout << hypot(x,y); //sqrt(x^2 + y^2) w/ out overflow or underflow
    cout << fma(x,y,z); //x*y+z w/ out losing precision
    cout << fmax(x,y); //finds max of x and y
    cout << fmin(x,y); //finds min of x and y
    cout << fmod(x,y); //returns floating point remainder of x/y
    cout << pow(x,y); //x^y

    return 0;
}