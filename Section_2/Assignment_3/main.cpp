#include <iostream>

using namespace std;

int main(){

    //Try to modify x1 & x2 and see the compilation output
    int x = 5 ;
    const int MAX = 12 ;
    int &ref_x1 = x ;
    const int &ref_x2 = x ;

    ref_x1 = 5;
    // ref_x2 = 10; //Not valid as const reference 

    //Try to modify the pointer (e.g. ptr1) and the pointee value (e.g. *ptr1)
    const int *ptr1 = &x ;
    int *const ptr2 = &x ;
    const int * const ptr3 = &x ;

    int y=10;

    //Value held by address is constant
    ptr1=&y;
    // *ptr1 = 10;

    //Address is constant
    // ptr2=&y;
    *ptr2=8;

    //Both value and address are constant 
    // ptr3 = &y;
    // *ptr3=109;

    //Find which declarations are valid. If invalid, correct the declaration
    const int *ptr3 = &MAX ; //Valid as value held at address is constant
    // int *ptr4 = &MAX ; //Not valid as value is not constant 
    const int *const ptr4 = &MAX; //VALID

    const int &r1 = ref_x1 ; //r1 is const and cannot be modified but ref_x1 can 
    // int &r2 = ref_x2 ; //ref_x2 is constant so reference also needs to be constant
    const int &r2 = ref_x2;
    //So a const reference can refer a non-const value, but not vice versa


    // int *&p_ref1 = ptr1 ; //Needs to be prequalified with constant for a reference to a pointer
    const int *&p_ref = ptr1;

    // const int*&p_ref2 = ptr2 ; //Needs to be modified as the address held is constant
    const int*const &p_ref2 = ptr2;



    return 0;
}