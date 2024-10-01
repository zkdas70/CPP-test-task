//
// Created by zkda on 30.09.2024.
//

#ifndef COMMENT_H
#define COMMENT_H
#include <string>



class Comment {
private:
    std::string _author;
    std::string _text;
    int _rate;
    public:
    Comment(std::string author, std::string text, int rate) {
        _author = author;
        _text = text;
        SetRate(rate);
    };
    std::string GetAuthor() {
        return _author;
    };
    void SetAuthor(std::string author) {
        _author = author;
    };
    std::string GetText() {
        return _text;
    };
    void SetText(std::string text) {
        _text = text;
    }
    int GetRate() {
        return _rate;
    };
    void SetRate(int rate) {
        if (0 > rate || rate  > 5) {
                throw std::invalid_argument("rate должен быть в [0;5]");
        }
        _rate = rate;
    }
};



#endif
