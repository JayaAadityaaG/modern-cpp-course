#include <stdio.h>
#include <stdlib.h> //Memory allocating functions
#include <iostream>

using namespace std;

void Malloc(){
     int *p = (int*) malloc(sizeof(int)); 
    //malloc in C does not require the type casting - int *p = malloc(sizeof(int)); 
    // However it does in CPP
    int *p_2 = (int*) calloc(1,sizeof(int)); 
    //Number of elements, size of element, initializes to 0
    int *p_3 = (int*) calloc(5,sizeof(int)); //Array of 5 integers
    int *p_4 = (int*) malloc(sizeof(int)*5); //Array of 5 integers
    *p = 5;
    cout<<*p<<" "<<*p_2<<endl;
    free(p);
    free(p_2);
    
    p = nullptr; // to ensure its not a dangling pointer 
    p_2 = nullptr;
    p_3 = nullptr;
    p_4 = nullptr;
}

void New(){
    int *p = new int;
    int *p_2 = new int(4);//can also intiialize in new 
    *p = 6;
    cout<<*p<<endl;
    delete p;
    delete p_2;
    p = nullptr;
    p_2 = nullptr;
    
}

void NewArrays(){
    int *p = new int[5];
    
    for(int i=0;i<5;i++){
        p[i] = i;
    }

    int *p_2 = new int[5]{1,2,3,4,5};

    delete[] p;
    delete[] p_2;
    p = nullptr; //However, no need to assign null as last line in function as the p variable will be destoryed when it reutnrs
}

void NewStrings(){
    char *p = new char[4];
    strcpy(p,"C++");
    cout<<*p<<endl;
    delete[] p;
    //alwasy allocated 1 extra for null terminating character
}

void TwoD(){
    int data[2][3] = 
    {1,2,3,
    4,5,6};
    data[0][1] = 1;//for stack memroy 2D arrays
    
    int *p1 = new int[3];
    int *p2 = new int[3];
    int **pData = new int *[2];
    pData[0] = p1;
    pData[1] = p2;

    pData[0][1] = 2;//Can access in the same way 

    delete[]pData[0];
    delete[]pData[1];
    delete[]pData;
}

int main(){
    New();
    return 0;
}