#include <iostream>

//Pass by value
// Acopy of the variable is created in the function and the block of code is performed on them without
// modifying the original arguments 
void Swap(int x,int y){
    int temp = x;
    x = y;
    y = temp;
}

//Pass by address
void Swap_2(int *x,int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}

//Pass by reference
void Swap_3(int &x, int &y){
    int temp = x;
    x = y;
    y = temp;
}

void Print(int *ptr){
    using namespace std;
    if(ptr!=nullptr){ //Need nullpointer check if dereferencing pointers to prevent acces violation
    //In general need to check if pointer is null 
        cout<<*ptr<<"\n";
    }
}

//Reference cannot be null, so nullptr can never be passed
void Print(int &ptr){
    using namespace std;
    cout<<ptr<<"\n";
}


int main(){
    using namespace std;
    int a =5, b=10;
    Swap(a,b);
    cout<<"a: "<<a<<" ,b: "<<b<<endl;
    Swap_2(&a,&b);
    cout<<"a: "<<a<<" ,b: "<<b<<endl;
    Swap_3(a,b);
    cout<<"a: "<<a<<" ,b: "<<b<<endl;
    return 0;
}