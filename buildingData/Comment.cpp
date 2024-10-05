//
// Created by zkda on 05.10.2024.
//
#include "Comment.h"
#include <stdexcept>

Comment::Comment(std::string author, std::string text, int rate) {
    _author = author;
    _text = text;
    SetRate(rate);
};

std::string Comment::GetAuthor() {
    return _author;
};

void Comment::SetAuthor(std::string author) {
    _author = author;
};

std::string Comment::GetText() {
    return _text;
};

void Comment::SetText(std::string text) {
    _text = text;
}

int Comment::GetRate() {
    return _rate;
};

void Comment::SetRate(int rate) {
    if (0 > rate || rate > 5) {
        throw std::invalid_argument("rate должен быть в [0;5]");
    }
    _rate = rate;
}
