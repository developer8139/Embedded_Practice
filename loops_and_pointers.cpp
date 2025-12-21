#include <iostream>
using namespace std;


int main() {
    //Here we are going to declare an array, with a fixed size.
    //the number inside the paranthese is the size of the array
    int arr[] = {2,15,16,20,25};
    int size = sizeof(arr) / sizeof(arr[0]);

    //Here we assign a pointer to the first element in the array
    int* arrPtr = arr;

    //Now we will use the pointer to loop over the array
    //this for loop will iterate over the array for as long as the pointer is in the array
    for(; arrPtr < arr + size; ++arrPtr) {
        cout << *arrPtr << endl;
    }
    return 0;
}