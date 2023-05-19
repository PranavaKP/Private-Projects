#include <iostream>
using namespace std;
#include <string>
#include <cmath>

//polymorphism: uses methods/attributes from base class to perform similar but different tasks, doesn't only inherit them but changes its value

class livingOrganisms{
    public:
        string diet;
        void sound(){
            cout << "a sound";
        }

};

class birds : public livingOrganisms{
    public:
        string type;
        string featherColors;
        string diet = "Omnivorous";
        void sound(){
            cout << "Chirp Chirp!";
        }
        birds(string x,string y){
            type = x;
            featherColors = y;
        }
};

class plants : public livingOrganisms{
    public:
        string type;
        string flowerColor;
        string diet = "autotrophic";
        void sound(){
            cout << "Doesn't make any noise";
        }
        plants(string x, string y){
            type = x;
            flowerColor = y;
        }
};

int main(){
    
    birds Parrot("Parrot", "Green");
    cout << Parrot.diet << " " + Parrot.featherColors << " " + Parrot.type;
    Parrot.sound();

    plants AppleTree("Tree", "Red");
    cout << AppleTree.diet << " " + AppleTree.flowerColor << " " + AppleTree.type;
    AppleTree.sound();

    return 0;
}