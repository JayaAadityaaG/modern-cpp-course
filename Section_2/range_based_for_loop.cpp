#include <iostream>
using namespace std;
int main(){
    int arr[] = {1,2,3,4,5};
    //Normal for loop 
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" "<<endl;
    }

    //Range based
    for(int x:arr){
        cout<<x<<" ";
    }

    //Alterantively 
    for(auto &x:arr){
        cout<<x<<endl;
    }
    //use reference to prevent copy of variable being created in every iteration 
    //You can also use this to modify the values in the array 
    // If you dont want to change the value use const 

    //Can aslso use {1,3,4,4} instead of arr

    int *beg = &arr[0];
    int *end = &arr[5];
    while(beg!=end){
        cout<<*beg<<endl;
        ++beg;
    }

    //Can be rewritten as 
    int *beg_2 = std::begin(arr); //Functions in containers 
    int *end_2 = std::end(arr);
    while(beg_2!=end_2){
        cout<<*beg_2<<endl;
        ++beg_2;
    }

    //How range based for loop works internally 
    // range will be of type pointer and hence we cannot use being and end on it 
    auto range = arr;
    auto begin = std::begin(arr);
    auto end = std::end(arr);
    // auto &&range = arr; //Forward reference, type of range will befcome type of array 
    // auto begin = std::begin(range);
    // auto end = std::end(range);

    for(;begin!=end;++begin){
        auto v = *begin;
    }
    return 0;
}