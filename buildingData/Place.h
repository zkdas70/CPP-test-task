//
// Created by zkda on 30.09.2024.
//

#ifndef PLACE_H
#define PLACE_H
#include <stdexcept>
#include <string>
#include <vector>

#include "Comment.h"


class Place {
private:
    std::string _name;
    std::vector<Comment> _comments;
    int _commentsCount;

public:
    Place(std::string name, std::vector<Comment> comments, int commentsCount);

    void SetName(std::string name);

    std::string GetName();

    void SetComments(std::vector<Comment> comments);

    std::vector<Comment> GetComments();

    void SetCommentsCount(int commentsCount);

    int GetCommentsCount();

    double GetRate();
};
#endif
