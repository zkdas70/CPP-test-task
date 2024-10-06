//
// Created by zkda on 06.10.2024.
//

#ifndef TELEPORT_H
#define TELEPORT_H
#include "Vehicle.h"


class Teleport : public Vehicle {
public:
    Teleport() = default;

    double CalculateTime(double Distance) override;
};


#endif //TELEPORT_H
