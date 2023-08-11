#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>

using namespace std;

class Vehicle
{
public:
    string* _mark;
    int _numberOfCylinders;
    long _power;
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
    short _bodyLoadCapacity;
public:
    Truck();
    Truck( string* mark, int numberOfCylinders, long power, short bodyLoadCapacity);
    Truck( string* mark, int numberOfCylinders, long power);
    Truck( string* mark, int numberOfCylinders, short bodyLoadCapacity);
    Truck( string* mark, long power, short bodyLoadCapacity);
    Truck( int numberOfCylinders, long power, short bodyLoadCapacity);
    Truck( string* mark, int numberOfCylinders);
    Truck( string* mark, long power);
    Truck( int numberOfCylinders, long power);
    Truck( string* mark, short bodyLoadCapacity);
    Truck( int numberOfCylinders, short bodyLoadCapacity);
    Truck( long power, short bodyLoadCapacity);
    Truck(string* mark);
    Truck(int numberOfCylinders);
    Truck(long power);
    Truck( short bodyLoadCapacity);

    ~Truck();

    void out();

    string* setMark();
    short setBodyLoadCapacity();

};

#endif // VEHICLE_H
