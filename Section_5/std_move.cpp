#include<iostream>
#include "Integer_2.h"

using namespace std;

//Compile with -std=c++11

int main(){
    Integer a(1);
    Integer b{std::move(a)};
    return 0;
}