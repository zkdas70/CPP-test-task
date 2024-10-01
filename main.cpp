#include <iostream>

#include "buildingData/Comment.h"
#include "buildingData/Place.h"
#include "buildingData/Building.h"

void comment_printer(Comment comment) {
    std::cout << "   comment by: " << comment.GetAuthor() << " - " << comment.GetRate() << std::endl;
    std::cout << "   text: " << comment.GetText() << std::endl << std::endl;
};

void place_printer(Place place) {
    std::cout << "Place" << std::endl;
    std::cout << " name:" << place.GetName() << std::endl;
    std::cout << " Rate - " << place.GetRate() << std::endl;
    std::cout << " CommentsCount - " << place.GetCommentsCount() << std::endl;

    for (Comment comment: place.GetComments()) {
        comment_printer(comment);
    }
}

void building_printer(Building building) {
    std::cout << std::endl;

    std::cout << "Address: " << building.GetAddress() << std::endl;
    std::cout << "PlacesCount - " << building.GetPlacesCount() << std::endl;
    for (Place place: building.GetPlaces()) {
        place_printer(place);
    }
}

int main() {
    const int places_count = 5;
    const int comments_count = 3;
    std::vector<Place> places;

    for (int i = 0; i < places_count; i++) {
        std::vector<Comment> comments;

        std::string placename;
        std::cout << "Enter place name:\n";
        std::cin >> placename;

        for (int j = 0; j < comments_count; j++) {
            std::string user;
            std::cout << "Enter user name:\n";
            std::cin >> user;
            std::cin.ignore();

            std::string text;
            std::cout << "Enter text:\n";
            std::cin >> text;
            std::cin.ignore();

            int rate = 0;
            std::cout << "Enter rate (from 0 to 5):\n";
            std::cin >> rate;
            std::cout << std::endl;
            std::cin.ignore();

            comments.emplace_back(user, text, rate);
        }


        places.emplace_back(placename, comments, comments_count);
    }
    std::string buildingname;
    std::cout << "Enter building name:\n";
    std::cin >> buildingname;
    std::cout << "\n\n\n\n\n\n";

    Building building = Building(buildingname, places, places_count);

    building_printer(building);
    return 0;
}
