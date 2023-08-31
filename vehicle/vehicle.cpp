#include "vehicle.h"
Vehicle::Vehicle(string mark, int numberOfCylinders, int power)
{
    _mark = mark;
    _numberOfCylinders = numberOfCylinders;
    _power = power;
}

Vehicle::~Vehicle()
{
    std::cout << "Vehicle " << _mark << " deleted" << std::endl;
}

void Vehicle::out()
{
    cout<< _mark <<endl;
    cout<< _numberOfCylinders <<endl;
    cout<< _power <<endl;
}

Truck::Truck(string mark, int numberOfCylinders, int power, int bodyLoadCapacity)
{
    _mark = mark;
    _numberOfCylinders = numberOfCylinders;
    _power = power;
    _bodyLoadCapacity = bodyLoadCapacity;
}

Truck::~Truck()
{
    std::cout << "Truck " << _mark << " deleted" << std::endl;
}

void Truck::out()
{
    cout<< _mark <<endl;
    cout<< _numberOfCylinders <<endl;
    cout<< _power <<endl;
    cout<< _bodyLoadCapacity <<endl;
}

