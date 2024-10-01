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
        Place(std::string name, std::vector<Comment> comments, int commentsCount) {
            _name = name;
            _comments = comments;
            SetCommentsCount(commentsCount);
        };

        void SetName(std::string name) {
            _name = name;
        }

        std::string GetName() {
            return _name;
        }

        void SetComments(std::vector<Comment> comments) {
            _comments = comments;
        }

        std::vector<Comment> GetComments() {
            return _comments;
        }

        void SetCommentsCount(int commentsCount) {
            if (commentsCount < 0) {
                throw std::invalid_argument("commentsCount должен быть >= 0");
            }
            _commentsCount = commentsCount;
        }

        int GetCommentsCount() {
            return _commentsCount;
        }

        double GetRate() {
            double rate_sum = 0;
            for (int i = 0; i < _commentsCount; i++) {
                rate_sum += _comments[i].GetRate();
            }
            return rate_sum / _commentsCount;
        }
    };
#endif