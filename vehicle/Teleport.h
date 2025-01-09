//
// Created by zkda on 06.10.2024.
//

#ifndef TELEPORT_H
#define TELEPORT_H
#include "Vehicle.h"

namespace vehicles::teleport {
/**
 * @brief Телепорт - Транспортное средство, что перемещает все почти мгновенно
 */
class Teleport final : public vehicle::VehicleInterface {
 public:
  Teleport() = default;

  inline double CalculateTime(double distance) override { return 0.1; };
};
}  // namespace Teleport
#endif  // TELEPORT_H
