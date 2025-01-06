#include <iostream>
#include <vector>

#include "vehicle/Car.h"
#include "vehicle/Teleport.h"
#include "vehicle/Vehicle.h"

namespace {
using std::vector;

constexpr int kNumVehicles = 5;

vector<vehicle::Vehicle *> VehiclesFactori() {
  auto vehicles = vector<vehicle::Vehicle *>();

  for (int i = 0; i < kNumVehicles; i++) {
    if (i % 2 == 0) {
      vehicles.push_back(new teleport::Teleport());
      std::cout << "DEBUG - Created Teleport (with index " << i << ")"
                << std::endl;
    } else {
      const float speed = rand() / 100;
      vehicles.push_back(new car::Car(speed));
      std::cout << "DEBUG - Created Car (with index " << i
                << ") speed = " << speed << std::endl;
    }
  }

  return vehicles;
}
}  // namespace

int main() {
  srand(time(nullptr));  // рандом разный при каждом запуске

  for (vehicle::Vehicle *vehicle : VehiclesFactori()) {
    const float distance = rand() % 1000;

    std::printf("Distance = %f => Calculate time  = %f \n", distance,
                vehicle->CalculateTime(distance));

    delete vehicle;  // удаляем vehicle
  }

  return 0;
}
