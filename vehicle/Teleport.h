//
// Created by zkda on 06.10.2024.
//

#ifndef TELEPORT_H
#define TELEPORT_H
#include "Vehicle.h"

namespace teleport {
class Teleport : public vehicle::Vehicle {
 public:
  Teleport() = default;

  double CalculateTime(double Distance) override { return 0.1; };
};
}  // namespace Teleport
#endif  // TELEPORT_H
