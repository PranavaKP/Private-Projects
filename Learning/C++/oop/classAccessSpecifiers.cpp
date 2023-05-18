#include <iostream>
using namespace std;
#include <string>
#include <cmath>

//access specifiers: specify the access of attributes/members
//by default all attributes/members are private in classes while public in structures
    //public --> the members/attributes are accessable outside the class
    //private --> not accessable/viewable outside the class
    //protected --> no accessable/viewable oustide the class but can be accessed in inherited classes

class myClass{
    public: 
        int x;
    private:
        int y;
};


int main(){
    myClass myObj;
    myObj.x = 5; // works
    myObj.y = 5; //doesn't work
    return 0;
}