//
// Created by zkda on 06.10.2024.
//

#ifndef CAR_H
#define CAR_H
#include "Vehicle.h"

namespace vehicles::car {
class Car final : public vehicle::VehicleInterface {
 public:
  explicit Car(double speed);  // explicit запрет не явных преобразований

  void set_speed(const double speed) { this->speed_ = speed; };

  [[nodiscard]] inline double get_speed() const { return speed_; };

  inline double CalculateTime(const double distance) override {
    return distance / speed_;
  };

 private:
  double speed_;
};
}  // namespace vehicles::car
#endif  // CAR_H
