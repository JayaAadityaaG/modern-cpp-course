#include <iostream>
#include "math.h"
using namespace std;

int main(){
    int a = 5, b=2, c=3;
    cout<<"Variables are : "<<a<<" "<<b<<endl;
    Add(a,b,c);
    cout<<"Sum when passed by reference is : "<<c<<endl;
    Factorial(a,c);
    //Essentially whem you pass by refernce, the function creates a reference variable to the 
    //original argument as compared to an independent copy
    cout<<"Factorial is : "<<c<<endl;
    Swap(a,b);
    cout<<"Swapped values are : "<<a<<" "<<b<<endl;
    return 0;
}