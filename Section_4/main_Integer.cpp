#include "Integer.h"
#include <iostream>

void Print(Integer i){

}

Integer Add(int x, int y){
    return Integer(x+y);
}

int main(){
    Integer i(5);
    Integer i2(i);// Explicitly creating a copy 
    std::cout<<i.GetValue()<<std::endl;

    int *p1 = new int(5);
    //Shallow copy, only addresses are copied and both pointers point to same address and value 
    int *p2 = p1;

    //Deep copy 
    int *p3 = new int(*p1);
    return 0 ;
}