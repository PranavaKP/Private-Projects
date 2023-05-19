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
    ofstream ExampleFile("example.txt");
    
    //writing a file
    ExampleFile << "example!!!";

    //reading from a file

        //creating a string to output the text file
        string exampleFile;

        //read from the text file
        ifstream ExampleFile("example.txt");

        //use a loop with getline() to read the file line by line
        while (getline (ExampleFile, exampleFile)) {
        // Output the text from the file
        cout << exampleFile;
        }

    //closing a file
    ExampleFile.close();
}