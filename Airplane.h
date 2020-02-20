//
// Created by Admin on 2/18/2020.
//

#ifndef PROJECTS_AIRPLANE_H
#define PROJECTS_AIRPLANE_H

#include <iostream>
using namespace std;

class Airplane {
public:
    int getNumber() const {
        return number;
    }
    double getMileage() const {
        return mileage;
    }
    Airplane() {
        number=0;
        mileage=5000;
        cout << "Default airplane constructor" << endl;
    }
    ~Airplane() {cout << "Default airplane destructor";}
    explicit Airplane(int i):number(i), mileage(5000) {
        cout << "Airplane " << number << " constructed, mileage 5000 km." << endl;
    }
    void fly (int distance) {
        if (mileage < distance) {
            cout << "Insufficient fuel. Mileage remaining is " << mileage << endl;
            return;
        }
        mileage-=distance;
        cout << "Airplane " << number << " flew " << distance << " kilometers." << endl;
        cout << mileage << " km remaining." << endl;
    }
    void refuel (double money) {
        mileage+=(money/5);
        cout << "Airplane " << number << " gained " << money/5 << " gallons of fuel." << endl;
    }
private:
    int number;
    double mileage;
};

class AirBus : public Airplane {
public:
    explicit AirBus(int i) : Airplane(i) {cout << "Parameter AirBus Constructor" << endl;}
    AirBus() {cout << "Default AirBus constructor." << endl;}
    ~AirBus() {cout << "Default AirBus Destructor" << endl;}
};


#endif //PROJECTS_AIRPLANE_H
