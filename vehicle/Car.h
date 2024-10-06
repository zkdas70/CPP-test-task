//
// Created by zkda on 06.10.2024.
//

#ifndef CAR_H
#define CAR_H
#include "Vehicle.h"


class Car : public Vehicle {
private:
    double _speed;

public:
    explicit Car(double speed); // explicit запрет не явных преобразований

    void setSpeed(double speed);

    double getSpeed();

    double CalculateTime(double Distance) override;
};


#endif //CAR_H
