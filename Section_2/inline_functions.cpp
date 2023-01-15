#include <iostream>

using namespace std;

// int Square(int x){
//     return x*x;
// }

//Macro
// #define Square(x) x*x

inline int Square(int x){
    return x*x;
}

int main(){

    int val = 5;
    int Result = Square(val+1); //Works for inline but not macro

    return 0;
}