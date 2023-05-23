#include <iostream>
using namespace std;
#include <string>
#include <cmath>

int main(){
    //outputs a certain set of code if a condition is true, the condition is made up of comparison opperators and logical opperators, same as javascript
    
    //example 1:
    int x = 5;
    int y = 3;
    if(x == y){
        cout << "x = y";
    } else if(y > x){
        cout << "y is greater than x";
    }else{
        cout << "x is greater than y";
    }

    //example 2:
    string day = "Weekend";
    int age = 13;
    int price;
    if(day == "Weekday"){
        price = 30;
    }else if(day == "Weekend" && age <= 13){
        price = 15;
    }else{
        price = 21;
    }

    //short hand if..else
        //variable = (condition) ? expressiontrue : expressionFalse
        
    //example:
        //normal
        int time = 20;
        if (time < 18) {
        cout << "Good day.";
        } else {
        cout << "Good evening.";
        }

        //short hand
        int time = 20;
        string result = (time < 18) ? "Good day." : "Good evening.";
        cout << result;

    //switch statements switches between multiple cases
    /*break or default is optional(it breaks an opperation which is the switch function in this case,
     so none of the code in the switch function after the break is executed*/

    //example:
        int number = 3;
        switch(number){
            case 6:
                cout << "Today is Saturday";
                break;
            case 7:
                cout << "Today is Sunday";
                break;
            default:
                cout << "Today is a weekday!";
            
        }

}