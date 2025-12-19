#include <iostream>
using namespace std;

//Understanding Pointers in C++
//Pointers are a variable that stores a memory address of a value
//Depending on where pointers are stored, depends on what part of memory they are stored in

int myPointer();

int main() {
    //Using the new keyword will dynamically allocate the pointer onto the heap
    //This practice is recommended not to use in embedded systems, as it can slow down your program
    string* myString = new string; //Don't use in embedded systems
    *myString = "Keith"; //assigning a value to the memory address, otherwise it would be a null value automatically assigned during compiling

    //This will print out the memory address where the value is stored
    cout << "This is the memory address of where the value of myString is stored" << endl;
    cout << myString << endl;
    myPointer();


    return 0;
}

//When a pointer is declared within a function it is stored on the stack
int myPointer() {
    //First we declare a variable with the value appointed to it
    int number = 34;
     //This pointer stores the memory address of where the value 34 is stored. In others is pointing to that address
    int* num = &number;

    //So when we output just the num variable, we will get the memory address not the value 34
    cout << "This is the memory address of where the num value is stored" << endl;
    cout << num << endl;
    //In order to print out the value of a pointer, you use the dereferencing notation *
    cout << *num << endl;

    return 0;
}


//This is the ouput of this program after it has been compiled and run
//0x11fe05f80 this is the memory address of where the myString value is stored
//0x16d4fed2c this is the memory address of where the num value is stored
//34