//
// Created by zkda on 06.10.2024.
//

#include "Car.h"
namespace car {
Car::Car(double speed) : speed_(speed) {}

void Car::set_speed(double speed) { speed_ = speed; }

double Car::get_speed() { return speed_; }
}  // namespace car