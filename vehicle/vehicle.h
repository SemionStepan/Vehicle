#ifndef VEHICLE_H
#define VEHICLE_H

#include <iostream>

using namespace std;

class Vehicle
{
    string _mark;
    int _numberOfCylinders;
    int _power;
public:
    Vehicle(string mark = "", int numberOfCylinders = 0, int power = 0);

    void out();

};

class Truck : public Vehicle
{
    string _mark;
    int _numberOfCylinders;
    int _power;
    int _bodyLoadCapacity;
public:
    Truck( string mark = "", int numberOfCylinders = 0, int power = 0, int bodyLoadCapacity = 0);

    void out();

    inline string setMark(string str) { return _mark = str; }
    inline int setBodyLoadCapacity(int capacity) { return _bodyLoadCapacity = capacity; }

};

#endif // VEHICLE_H
