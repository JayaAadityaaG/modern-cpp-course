# include<iostream>

int main(){
    using namespace std;
    int x =10;
    cout<<&x<<endl;
    int *ptr=nullptr;
    ptr = &x;
    cout<<ptr<<endl;
    *ptr = 5;
    cout<<x<<endl;
    return 0;
}