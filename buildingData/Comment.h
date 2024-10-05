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
    Comment(std::string author, std::string text, int rate);

    std::string GetAuthor();

    void SetAuthor(std::string author);

    std::string GetText();

    void SetText(std::string text);

    int GetRate();

    void SetRate(int rate);
};


#endif
