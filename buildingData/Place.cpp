//
// Created by zkda on 05.10.2024.
//
#include "Place.h"

Place::Place(std::string name, std::vector<Comment> comments, int commentsCount) {
    _name = name;
    _comments = comments;
    SetCommentsCount(commentsCount);
};

void Place::SetName(std::string name) {
    _name = name;
}

std::string Place::GetName() {
    return _name;
}

void Place::SetComments(std::vector<Comment> comments) {
    _comments = comments;
}

std::vector<Comment> Place::GetComments() {
    return _comments;
}

void Place::SetCommentsCount(int commentsCount) {
    if (commentsCount < 0) {
        throw std::invalid_argument("commentsCount должен быть >= 0");
    }
    _commentsCount = commentsCount;
}

int Place::GetCommentsCount() {
    return _commentsCount;
}

double Place::GetRate() {
    double rate_sum = 0;
    for (int i = 0; i < _commentsCount; i++) {
        rate_sum += _comments[i].GetRate();
    }
    return rate_sum / _commentsCount;
}
