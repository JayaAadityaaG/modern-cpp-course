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
    Car(float amount, int pass);
    void FillFuel(float amount);
    void Accelerate();
    void Brake();
    void AddPassengers(int count);
    void Dashboard() const;
    static void ShowCount();
};