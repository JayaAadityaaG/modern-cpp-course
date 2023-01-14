#include <string>
#include<iostream>
int main(){
    int a1; //uninitialized 
    int a2=0; //Copy initialization

    std::string s1;
    std::string s2("C++");

    std::cout<<s2<<std::endl;
    std::cout<<"LOLL";

    char d1[8];//uninitialized 
    char d2[8] = {'a'}; 
    char d3[8] ={'a','b','c'}; //Aggregate initializtion
    char d4[8] = {"abcd"};

    int b1{} ;//Value initialization 
    //Initialied to default value, which is 0 for everything 
    int b3{5};// Direct initialization
    // int b2();//Most vexing parse 
    int b4 = 0;// Copy intiialization
    char e1[8]{};
    char e2[8]{"Hello"};

    //Can be used for heap memory too 
    int *p1 = new int{};
    char *p2 = new char[8]{};
    char *p3 = new char[8]{"HJello"};
    

}