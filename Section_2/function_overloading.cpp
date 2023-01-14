#include <iostream>

using namespace std;

int Add(int a, int b){
    return a+b;
}

double Add(double a, double b){
    return a+b;
}

void Print(int *x){

}

void Print(const int *x){

}

int main(){
    int result = Add(1,2);
    cout<<result<<endl;
    double result = Add(1.0,9.2);
    // auto res2 = Add(1,9.2); //Error 
    return 0;
}