#include <iostream>//need this to work with files
using namespace std;
#include <string>
#include <cmath>
#include<fstream> //allows to work with files

//fstream library includes the classes: 
    //ofstream that creates and writes to files
    //ifstream reads from files
    //fstream creates,reads, and writes to files

int main(){
    //create and open a text file
    ofstream exampleFile("example.txt");
    
    exampleFile << "example!!!";


}