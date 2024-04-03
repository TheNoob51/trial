#include<iostream>
using namespace std;
// In shallow copy, an object is created by simply copying the data of 
// all variables of the original object. 
// This works well if none of the variables of the object are defined in the heap section of memory.
// If some variables are dynamically allocated memory from heap section, 
// then the copied object variable will also reference the same memory location.

