#include <iostream>
#include <vector>

#include "vehicle/Car.h"
#include "vehicle/Teleport.h"
#include "vehicle/Vehicle.h"

int main() {
    srand(time(nullptr)); // рандом разный при каждом запуске

    std::vector<Vehicle *> vehicles;

    const int NUM_VEHICLES = 5;

    for (int i = 0; i < NUM_VEHICLES; i++) {
        if (i % 2 == 0) {
            std::cout << "Teleport (with index " << i << ")" << std::endl;
            vehicles.push_back(new Teleport());
        } else {
            float speed = rand() % 100;
            std::cout << "Car (with index" << i << ") speed = " << speed << std::endl;
            vehicles.push_back(new Car(speed));
        }
    }
    std::cout << std::endl;

    for (Vehicle *vehicle: vehicles) {
        float distance = rand() % 1000;
        std::cout << "Distance = " << distance << " => Calculate time  = " << vehicle->CalculateTime(distance) <<
                std::endl;

        delete vehicle; // удаляем vehicle
    }

    // закоментил так как удаляю объект выше (меньше циклов выше производительность)
    // for (Vehicle* vehicle : vehicles) { // удаление объектов из вектора
    //     delete vehicle;
    // }


    return 0;
}
