#include <iostream>
using namespace std;
#include <string>
#include <cmath>

//encapsulation: make sensitive data hidden from users by declaring class attributes as private
//provide for public get and set methords if others should be able to read/modify the private attribute

//example:
class example{
    private:
        int sensitiveData;
    
    public:

        //set methord
        void setSensitiveData(int s){
            sensitiveData = s;
        }

        //get methord
        int getSensitiveData(){ //the type has to be the same as the type of the private attribute
            return sensitiveData;
        }
};

int main(){
    example myExample;
    myExample.setSensitiveData(100);
    cout << myExample.getSensitiveData();
    return 0;
}