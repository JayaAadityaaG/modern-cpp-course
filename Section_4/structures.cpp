#include<iostream>

struct Point{
    int x;
    int y;
};

void DrawLine(int x1, int y1, int x2, int y2){
    //Not as readable as next one
}

void DrawLine(Point start, Point end){
    std::cout<<start.x<<std::endl;
}

int main(){

    return 0;
}