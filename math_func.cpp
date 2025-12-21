#include "MATH_COMPUTE.h"
#include <iostream>
using namespace std;


//Here we are defining what the math function is doing
//we are passing the parameters by reference, instead of by copy
//passing by reference is beneficial to performance and efficiency, especially when passing large objects
int doMath(int &a, int &b) {
    //even though we are passing by reference, we don't have to dereference them like pointers
    return a + b;
}