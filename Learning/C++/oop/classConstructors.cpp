#include <iostream>
using namespace std;
#include <string>
#include <cmath>

//constructors are special methords that are automatically called when an object is created using that class

//example:
class example{
    public:
        example(){
            cout << "This is an example. Everytime an object is created using the class, example, this message is printed";
        }
};

//example with parameters:
class ball{
    public:
        //attributes
        int size; //1 to 10: higher = bigger
        int bounciness ; //1 to 10: higher = more bouncy
        string color;
        double price;

        //constructor
        ball(int x, int y, string z, double a){
            cout << "Setting properties of your new ball!";
            size = x;
            bounciness = y;
            color = z;
            price = a;
        }

};

int main(){
    example exObject; //this will automatically create the object exObject and call the constructor of the class, example

    ball basketBall(6, 4, "Brown", 15.95); //this will automatically create the object basketBall and call the constructor of the class, ball

}