#include <iostream>
using namespace std;
#include <string>
#include <cmath>

int main(){
    
    //similar to javascript
    
    //structure of an array: type nameOfArray [#of elements/arraysize] = {element1, element 2, element3, etc};
    int myNumb[3] = {1,2,3};

    //you don't always have to include array size
    int myNumb2[] = {1,2,3,4,5};

    //you can declare the array and give a value to it afterwards
    string cars[4];
    cars[0] = "1";
    cars[1] = "2";
    cars[2] = "3";
    cars[3] = "4";

    //accessing elements in arrays: format: arrayName[index # that corresponds with the element u want to retrive]
    cout << cars[0];
    //changing eleement in an array: format: arrayName[index] = newValue;
    cars[0] = "1*";

    //looping through an array using for loops: same as javascript
    int numbers[] = {1,2,3,4,5};
    int max = 0;
    for(int i = 0; i < 5; i++){
        if(numbers[i] > max){
            max = numbers[i];
        }    
    }
    cout << max;

    //looping through an array using foreach loops
    max = 0;
    for(int i : numbers){
        if(numbers[i] > max){
            max = numbers[i];
        }
    }
    cout << max;

    /*getting the size of an array: 
    sizeof() returns the size of a type in bytes so sizeof(array) would result in the size of the array in bytes
    to get number of elements in an array: divide that by the sizeof the element type in bytes
    the number of elemetents in the list can be used to loop through an array, but one can use a foreach loop instead*/
    string randomDataset[] = {"hello", "hi"};
    int length = sizeof(randomDataset) / sizeof(string);
    cout << length;
    for(int i = 0; i < length; i++){
        cout << randomDataset[i];
    }

    return 0;
}