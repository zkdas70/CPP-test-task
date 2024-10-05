//
// Created by zkda on 05.10.2024.
//
#include "Building.h"


Building::Building(std::string address, std::vector<Place> places, int placesCount) {
    _address = address;
    _places = places;
    SetPlacesCount(placesCount);
}

std::string Building::GetAddress() {
    return _address;
};

void Building::SetAddress(std::string address) {
    _address = address;
}

std::vector<Place> Building::GetPlaces() {
    return _places;
}

void Building::SetPlaces(std::vector<Place> places) {
    _places = places;
}

int Building::GetPlacesCount() {
    return _placesCount;
}

void Building::SetPlacesCount(int places_count) {
    if (places_count < 0) {
        throw std::invalid_argument("commentsCount должен быть >= 0");
    }
    _placesCount = places_count;
}
