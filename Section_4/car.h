#pragma once
class Car{
private:
    float fuel ;
    float speed ;
    int passengers ;
    static int totalCount;
public:
    Car(); //Default Construcotr
    ~Car(); //Destructor
    Car(float amount);// Parametrized constructor 
    void FillFuel(float amount);
    void Accelerate();
    void Brake();
    void AddPassengers(int count);
    void Dashboard();
    static void ShowCount();
};