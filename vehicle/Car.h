//
// Created by zkda on 06.10.2024.
//

#ifndef CAR_H
#define CAR_H
#include "Vehicle.h"

namespace vehicles::car {
    /**
     * @brief Машина - Транспортное средство приметающееся по земле
     */
    class Car final : public vehicle::Vehicle {
      public:
        explicit Car(double speed); // explicit запрет не явных преобразований

        void setSpeed(const double speed) { this->speed_ = speed; };

        [[nodiscard]] inline double getSpeed() const { return speed_; };

        inline double calculateTime(const double distance) override { return distance / speed_; };

      private:
        double speed_;
    };
} // namespace vehicles::car
#endif // CAR_H
