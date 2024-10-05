//
// Created by zkda on 30.09.2024.
//

#ifndef BUILDING_H
#define BUILDING_H
#include "Place.h"


class Building {
private:
    std::string _address;
    std::vector<Place> _places;
    int _placesCount;

public:
    Building(std::string address, std::vector<Place> places, int placesCount);

    std::string GetAddress();

    void SetAddress(std::string address);

    std::vector<Place> GetPlaces();

    void SetPlaces(std::vector<Place> places);

    int GetPlacesCount();

    void SetPlacesCount(int places_count);
};


#endif //BUILDING_H
