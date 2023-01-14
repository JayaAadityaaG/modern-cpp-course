# include <iostream>

int main(){
    using namespace std;
    int x = 10; //Referent
    int &ref = x; //Reference 
    int y = 6;
    ref = y; //Assigns only value to ref and not make ref bind to y 
    cout<<"x : "<<x<<endl;
    cout<<"ref : "<<ref<<endl;

    return 0;

}