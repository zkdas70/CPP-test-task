//
// Created by zkda on 06.10.2024.
//

#ifndef TELEPORT_H
#define TELEPORT_H
#include "Vehicle.h"

namespace vehicles::teleport {
    /**
     * @brief Телепорт - Транспортное средство, что перемещает все почти
     * мгновенно
     */
    class Teleport final : public vehicle::VehicleInterface {
        // стандарт не описывает как быть с модификаторами доступа (пусть будут на пол отступа
        // назад)
      public:
        Teleport() = default;

        inline double CalculateTime(double distance) override { return 0.1; };
    };
} // namespace vehicles::teleport
#endif // TELEPORT_H
