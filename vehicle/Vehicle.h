//
// Created by zkda on 06.10.2024.

#ifndef VEHICLE_H
#define VEHICLE_H

namespace vehicles::vehicle {
    /**
     * @brief Базовый Интерфейс транспортного средства
     */
    class VehicleInterface { // стандарт рекомендует добавлять приписку
                             // Interface для виртуальных классов такого типа
      public:
        virtual ~VehicleInterface() = default; // default сгенерировать деструктор по умолчанию

        /**
         * @brief Находит расчетное время пути транспортного средства
         *
         * @warning Дистанция и время пути представлены в условных единицах
         *
         * @param distance Дистанция пути транспортного средства
         * @return Расчетное время пути
         */
        inline virtual double CalculateTime(double distance) = 0;
    };
} // namespace vehicles::vehicle

#endif // VEHICLE_H
