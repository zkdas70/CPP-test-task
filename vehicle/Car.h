//
// Created by zkda on 06.10.2024.
//

#ifndef CAR_H
#define CAR_H
#include "Vehicle.h"

namespace car {
class Car : public vehicle::Vehicle {
 private:
  double speed_;

 public:
  explicit Car(double speed);  // explicit запрет не явных преобразований

  void set_speed(double speed);

  double get_speed();

  double CalculateTime(double Distance) override { return Distance / speed_; };
};
}  // namespace car
#endif  // CAR_H
