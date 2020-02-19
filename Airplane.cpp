//
// Created by Admin on 2/18/2020.
//

#include "Airplane.h"

int main () {
    AirBus *a;
    a = new AirBus(5);
    a->fly();
    delete a;
}
