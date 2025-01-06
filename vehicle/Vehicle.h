//
// Created by zkda on 06.10.2024.
//

#ifndef VEHICLE_H
#define VEHICLE_H

namespace vehicle {
class Vehicle {
 public:
  virtual ~Vehicle() =
      default;  // default сгенерировать деструктор по умолчанию

  inline virtual double CalculateTime(
      double Distance) = 0;  // Абстрактный метод 0 нужен для компиляции
};
}  // namespace vehicle

#endif  // VEHICLE_H
