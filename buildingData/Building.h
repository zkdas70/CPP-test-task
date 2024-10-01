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
    Building(std::string address, std::vector<Place> places, int placesCount) {
        _address = address;
        _places = places;
        SetPlacesCount(placesCount);
    }
    std::string GetAddress() {
        return _address;
    };
    void SetAddress(std::string address) {
        _address = address;
    }
    std::vector<Place> GetPlaces() {
        return _places;
    }
    void SetPlaces(std::vector<Place> places) {
        _places = places;
    }
    int GetPlacesCount() {
        return _placesCount;
    }
    void SetPlacesCount(int places_count) {
        if (places_count < 0) {
            throw std::invalid_argument("commentsCount должен быть >= 0");
        }
        _placesCount = places_count;
    }
};



#endif //BUILDING_H
