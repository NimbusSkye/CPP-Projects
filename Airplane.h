//
// Created by Admin on 2/18/2020.
//

#ifndef PROJECTS_AIRPLANE_H
#define PROJECTS_AIRPLANE_H

#include <iostream>
using namespace std;

class Airplane {
public:
    Airplane() {cout << "Default airplane constructor" << endl;}
    ~Airplane() {cout << "Default airplane destructor";}
    Airplane(int i) {number=i; cout << "Parameter Airplane constructor" << endl;}
    void fly () {
        std::cout << "Airplane " + number << " is flying.";
    }
private:
    int number;
};

class AirBus : public Airplane {
public:
    AirBus(int i) : Airplane(i) {cout << "Parameter AirBus Constructor" << endl;}
    AirBus() {cout << "Default AirBus constructor." << endl;}
    ~AirBus() {cout << "Default AirBus Destructor" << endl;}
};


#endif //PROJECTS_AIRPLANE_H
