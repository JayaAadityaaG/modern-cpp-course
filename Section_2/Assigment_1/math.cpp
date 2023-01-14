#include "math.h"
int Add(int *a, int *b){
    return (*a+*b);
}    //Add two numbers and return the sum
void AddVal(int *a, int *b, int *result){
    *result = *a+*b;
} //Add two numbers and return the sum through the third pointer argument
void Swap(int *a, int *b) {
    int temp = *a;
    *a=*b;
    *b = temp;
}  //Swap the value of two integers
void Factorial(int *a, int *result){
    int factorial = 1;
    for (int i=1;i<=*a;i++){
        factorial*=i;
    }
    *result = factorial; 
}       //Generate the factorial of a number and return that through the second pointer argument