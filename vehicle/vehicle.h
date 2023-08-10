#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>

using namespace std;

class Vehicle
{
    string* _mark;
    int _numberOfCylinders;
    long _power;
public:
    Vehicle();
    Vehicle( string* mark, int numberOfCylinders, long power);
    Vehicle( string* mark, int numberOfCylinders);
    Vehicle( string* mark, long power);
    Vehicle( int numberOfCylinders, long power);
    Vehicle(string* mark);
    Vehicle(int numberOfCylinders);
    Vehicle(long power);

    ~Vehicle();

    void out();

};

class Truck : public Vehicle
{
    int _bodyLoadCapacity;
public:
    Truck();

};

#endif // VEHICLE_H
