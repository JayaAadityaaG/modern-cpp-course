#include <iostream>

using namespace std;

void Print(int count, char ch){
    for(int i=0;i<count;++i){
        cout<<ch;
    }
    cout<<endl;
}

void EndMessage(){
    cout<<"End of progam"<<endl;
}

int main(){
    atexit(EndMessage);
    Print(5,'#');
    //Function pointer 
    void(*pfn)(int,char) = Print;

    //Ways to call 
    (*pfn)(3,'*');
    pfn(4,'+');
    cout<<"End of main"<<endl;
    return 0;
}