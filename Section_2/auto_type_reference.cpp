#include <iostream>
using namespace std;

int main(){
    auto i = 1;
    auto j = 5;
    auto sum = i+j;

    auto sum_2 = i+51.2f;
    //The type of variable is when there are different fvariauble in the sum is the largest type present, in this case float

    const int x = 10;
    auto var = x; //QUalfier is not included 
    const auto var_2 = x;//not new var is constatn

    //Can also have an function return initializer 
    //auto can be used with static and const 
    auto &var_3 = x;// here const is not discared and its a constant reference 
    auto *ptr = &x; //Here also constant 

    //NEed to avoid using  auto for pointers and refeernces as it can create confusion 

    auto list = {1,2,3,4}; //Needs assignment operator for initializer list f
    return 0;
}