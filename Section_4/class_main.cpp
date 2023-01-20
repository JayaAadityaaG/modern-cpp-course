#include "car.h"

int main(){
    Car::ShowCount();
    const Car car(4);
    // car.FillFuel(6);
    // car.Accelerate();
    // car.Accelerate();
    // car.Accelerate();
    // car.Accelerate();
    // car.Dashboard();
    Car::ShowCount();
    Car c1, c2;
    car.Dashboard();
    return 0;
}