#include <iostream>

void Print(const int *ptr){
    //In this declaration, cannot modify the value held by the address held by the pointer 
}

void Print(const int &ref){
    //Cannot modify reference
    //Can pass literal or l-value or variable 
}
//Why use reference over pointers? Easier syntax to use 
int main(){
    using namespace std;
    //Code for const lecture 
    /*
    float radius = 10;
    // cin >>radius;
    const float PI = 3.14f;
    //Has scope only within main function unlike macros 
    //use capital letters for const
    float area = PI*radius*radius;
    */
    const int CHUNK_SIZE = 512;
    const int *ptr = &CHUNK_SIZE; //This means *ptr is constant and ptr is not
    //This means that the address ptr is pointing to is not constant, but the value held by it is 
    const int *const ptr_2 = &CHUNK_SIZE; //THis way both the address and the value held by it is constant
    

    //const with References 
    const int &ref = 5; //if qualified with const, the reference can point to a literal
    // int &ref2 = 5; //This is an error 

    return 0;
}