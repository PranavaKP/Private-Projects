#include <iostream>
using namespace std;
#include <string>
#include <cmath>

//inheritance: inheriting attributes and methods frm one class to another - helps reuse attributes
    //derived class(child) : class that inherits from another class - inherits attributes from the parent while also adding in more attributes
    //base class(parent) : the class which is used to make the derived class

// Base Class(Parent)
class animals {
    public:
        string diet = "Omnivorous";
        string type = "Bird";
        void sound(){
            cout << "Chirp, Chirp! \n";
        }
};

//Derived Class(Child)
class parrot : public animals{
    public:
        string species = "Green Parrot";
};

int main(){
    //using inheritance
    parrot parrotOne; // created an object from the class, parrot
    parrotOne.sound(); // use an inherited attribute
    cout << parrotOne.diet << " " << parrotOne.type << " " << parrotOne.species; // use unique and inherited attributes

    return 0;
}
