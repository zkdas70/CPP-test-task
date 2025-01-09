//
// Created by zkda on 06.10.2024.
// стандарт предписывает оставлять метку с авторством в начале файла
// (помимо автрорства также должна быть лицензия и почта)
//

#include <iostream>
#include <vector>

#include "vehicle/Car.h"
#include "vehicle/Teleport.h"
#include "vehicle/Vehicle.h"

// Анонимный namespace (виден только в этом файле). Стандарт рекомендует
// использовать namespace-ы для организации кода
namespace {
    // такое использования using разрешено
    using std::vector;

    using vehicles::car::Car;
    using vehicles::teleport::Teleport;
    using vehicles::vehicle::Vehicle;

    // количество Vehicles что будет созданно
    constexpr int NUM_VEHICLES = 5;

    /**
     * @brief Создает вектор из транспортных средств.
     *
     * Эта функция создает вектор длины kNumVehicles состоящий из реализаций
     * VehicleInterface
     *
     * @return Вектор из представлений транспортных средств
     */
    vector<Vehicle*> vehiclesFactori() {
        auto vehicles = vector<Vehicle*>();

        for (int i = 0; i < NUM_VEHICLES; i++) {
            if (i % 2 == 0) {
                vehicles.push_back(new Teleport());

                // для вывода данных рекомендовано использовать потоки
                std::cout << "Created Teleport (with index " << i << ")" << std::endl;
            } else {
                const float speed = rand() / 100;
                vehicles.push_back(new Car(speed));
                std::cout << "Created Car (with index " << i << ") speed = " << speed
                          << std::endl;
            }
        }

        return vehicles;
    }

    /**
     * @brief Напечатает и удалит все элементы из переданного вектора
     *
     * Эта функция предназначена для вывода данных из списка. Также отчищает
     * память (Удаляет объекты из списка, данное решение используется для
     * оптимизации, в рамках данного задания нет смысла сохранять список после
     * вывода данных)
     *
     * @param vehicles Вектор из реализаций VehicleInterface
     */
    void printVehiclesAndDelete(const vector<Vehicle*>& vehicles) {
        for (Vehicle* vehicle : vehicles) {
            const float distance = rand() % 1000;

            // для вывода данных рекомендовано использовать потоки
            std::cout << "Distance = " << distance
                      << " Calculate time  = " << vehicle->calculateTime(distance) << "\n";

            delete vehicle; // удаляем vehicle
        }
    }
} // namespace

/**
 * @brief Функция main программы
 *
 * @return Код ошибки
 */
int main() {
    srand(time(nullptr)); // рандом разный при каждом запуске

    const auto vehicles = vehiclesFactori();
    printVehiclesAndDelete(vehicles);

    return 0;
}
