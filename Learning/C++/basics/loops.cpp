#include <iostream>
using namespace std;
#include <string>
#include <cmath>

//loops are similar to java script

int main(){
    //while loops
    int x = 0;
    int sum = 0;
    while (x < 10){
        sum = sum + x;
        x++;
    }
    cout << sum;

    //do loops(variant of while loops)
    int x = 0;
    int sum = 0;
    do{
        sum = sum + x;
        x++;
    }
    while (x < 10);
    cout << sum;

    //for loops
    int x = 0;
    int sum = 0;
    for(int i = 0; i < 10; i++){
        sum = sum + i;
    }
    cout << sum;

    //foreach loops: used to exclusevely loop through elements in lists
    //format of foreach loops: variableName stands for the element corresponding to the index value being used at that itteration, arrayName is the array being used and/or traverced through
    /* 
        for(type variableName : arrayName){
            
        }
    */

    //example:
    int list[] = {10,20,30,40,50};
    int max = 0;
    for (int i : list){
        if(i > max){
            max = i;
        }
    } 
    cout << max;

    //break vs continue

    //break ends the loop, doesn't start the next iteration in the loop
    //ex:
    for (int i = 0; i < 10; i++) {
    if (i == 4) {
        break;
    }
    cout << i << "\n";
    }

    //continue ends one iteration in the loop
    //ex:    
    for (int i = 0; i < 10; i++) {
    if (i == 4) {
        break;
    }
    cout << i << "\n";
    }
}