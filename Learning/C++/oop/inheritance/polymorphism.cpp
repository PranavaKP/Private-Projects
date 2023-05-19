#include <iostream>
using namespace std;
#include <string>
#include <cmath>

//polymorphism: uses methods/attributes from base class to perform similar but different tasks, doesn't only inherit them but changes its value

class animals{
    public:
        string diet;
        void sound(){
            cout << "a sound";
        }

};

class birds : public animals{
    public:
        string diet = "Omnivorous";
        void sound(){
            cout << "Chirp Chirp!";
        }
};