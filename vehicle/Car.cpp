//
// Created by zkda on 06.10.2024.
//

#include "Car.h"

Car::Car(double speed) {
    _speed = speed;
}

void Car::setSpeed(double speed) {
    _speed = speed;
}

double Car::getSpeed() {
    return _speed;
}
double Car::CalculateTime(double Distance){
    return Distance / _speed;
}
