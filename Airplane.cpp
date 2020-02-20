//
// Created by Admin on 2/18/2020.
//

#include "Airplane.h"

int main () {
    auto *a = new AirBus();
    a->fly(5000);
    a->refuel(5000);
    a->fly(1000);
    delete a;
}
