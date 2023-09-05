#include "vehicle.h"
Vehicle::Vehicle(string mark, int numberOfCylinders, int power)
{
    _mark = mark;
    _numberOfCylinders = numberOfCylinders;
    _power = power;
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

void Truck::out()
{
    cout<< _mark <<endl;
    cout<< _numberOfCylinders <<endl;
    cout<< _power <<endl;
    cout<< _bodyLoadCapacity <<endl;
}

