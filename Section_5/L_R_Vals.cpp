#include <iostream>

using namespace std;

//Returns r-val
int Add(int x, int y ){
    return x+y;
}

//Returns l-value 
// In this case, the Transform function returns a reference 
int & Transform(int &x){
    x*=x;
    return x;
}

void Print(int &x){
    cout<<"Print(int&)"<<endl;
}
void Print(const int &x){
    cout<<"Print(const int&)"<<endl;

}

void Print(int &&x){
    cout<<"Print(int&&)"<<endl;

}

int main(){
    using namespace std;
    //x,y,z are l-values and 5,10,8 are r-values
    int x = 5;
    int y = 10;
    int z = 8;

    //Expression returns r-value
    int result = (x+y)*z;

    //Expression returns l-value
    ++x = 6;
    // cout<<x<<endl;
    Transform(x) = 10;
    // cout<<x<<endl;

    //R-value references
    int &&r1 = 10;
    int &&r2 = Add(3,2);
    // int &&r3 = x; //Error

    //L-value refernces 
    int &lr1 = x;
    int &lr2 = Transform(x);
    const int &lr3 = 3;


    //Function overloading 
    Print(x);
    Print(3);// Will go with either r-value ref or const ref, but priority to r-val
    return 0;
}