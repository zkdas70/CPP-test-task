//
// Created by zkda on 06.10.2024.
//

#ifndef VEHICLE_H
#define VEHICLE_H


class Vehicle {
public:
    virtual ~Vehicle() = default; // default сгенерировать деструктор по умолчанию

    virtual double CalculateTime(double Distance) = 0; // Абстрактный метод 0 нужен для компиляции
};


#endif //VEHICLE_H
