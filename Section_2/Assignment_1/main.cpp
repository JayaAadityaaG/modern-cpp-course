#include<iostream>
#include "math.h"
using namespace std;

int main(){
    int x=5;
    int y=6;
    int c=0;
    int *a, *b, *result;
    a = &x;
    b = &y;
    result = &c;
    cout<<"Add is :"<<Add(a,b)<<endl;
    AddVal(a,b,result);
    cout<<"AddVal is : "<<*result<<endl;
    Swap(a,b);
    cout<<"Swap is :"<<*a<<" "<<*b<<endl;
    Factorial(a,result);
    cout<<"Factorial is :"<<*result<<endl;
    return 0;
}