#include <iostream>

using namespace std;

int main(){
    // cout<<"Hello World"<<45<<8.2f<<endl;
    // endl or "\n" for newline

    //Reading in int
    int age; 
    cout<<"Enter Age :";
    cin>>age;
    cout<<"Age is :"<<age<<endl;

    //String input
    //This cannot be used for sentencees with spaces and cin will stop after the first space
    //instead use getline
    char buff[512];
    cout<<"Name ?";
    cin>>buff;
    cout<<"Name is :"<<buff<<endl;

    // discards the input buffer
    cout<<"Full name is: ";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    char fullname[512];
    cin.getline(fullname,64,'\n');
    cout<<"Name is : "<<fullname;
    //syntax - variable, number of charcters, delimiter
    return 0;
}