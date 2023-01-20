#include "car.h"
#include <iostream>

int Car::totalCount = 0;

Car::Car():Car(0)
{   
    // ++totalCount;
    std::cout<<"Car()"<<std::endl;
    // fuel = 0;
    // speed = 0;
    // passengers = 0;
}

Car::~Car()
{   
    --totalCount;
    std::cout<<"~Car()"<<std::endl;
}

Car::Car(float amount):Car(amount,0)
{   
    std::cout<<"Car(float)"<<std::endl;
    ++totalCount;
    fuel = amount;
    speed = 0;
    passengers = 0;
}

void Car::FillFuel(float amount)
{
    fuel = amount;
}

Car::Car(float amount, int pass)
{
    std::cout<<"Car(float,int)"<<std::endl;
    ++totalCount;
    fuel = amount;
    speed = 0;
    passengers = pass;

}

void Car::Accelerate()
{
        this->speed++;
        this->fuel-=0.5f;
}

void Car::Brake()
{
    speed = 0;
}

void Car::AddPassengers(int count)
{
    passengers = count;
}

void Car::Dashboard () const
{
    std::cout<<"Fuel : "<<fuel<<std::endl;
    std::cout<<"Speed : "<<speed<<std::endl;
    std::cout<<"Passengers : "<<passengers<<std::endl;
    std::cout<<"Total Count : "<<totalCount<<std::endl;

}

void Car::ShowCount()
{
    std::cout<<"Total Count : "<<totalCount<<std::endl;
}
