#include <iostream>
using namespace std;
#include <string>
#include <cmath>

//using protected: protected information can be accessable in inherited classes

class protectedClass{
    protected:
        int protectedThingy;
};

class getSetMethod : public protectedClass{
    public:
        void setProtectedThingy(int x){
            protectedThingy = x; //using a protected variable in an inherited class
        }
        int getProtectedThingy(){
            return protectedThingy; //using a protected variable in an inherited class
        }
};

int main(){
    protectedClass protectedObject; //creating an object from protected base class
    cout << protectedObject.protectedThingy; //doesn't work bc protectedThingy is protected

    getSetMethod anObject; //creating an object from derived class than uses the protected info from protected base class
    anObject.setProtectedThingy(21);
    anObject.getProtectedThingy();

}