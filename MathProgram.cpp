#include <iostream>
#include "MATH_COMPUTE.h"
using namespace std;



int main() {

    int num1 = 0;
    int num2 = 0;
    int sum;
    bool run = true;

    while(run) {
        cout << "You are entering the Math program: " << endl;
        
        cout << "Enter in a number: " << endl;
        cin >> num1;
        cout << "Enter in another number: " << endl;
        cin >> num2;
        
        
        cout << "Calculating......" << endl;
        sum = doMath(num1, num2);
        if(num1 && num2 != 0) {
            run = false;
        }
    }

    cout << "The sum is: " << sum << endl;
    
    return 0;
}