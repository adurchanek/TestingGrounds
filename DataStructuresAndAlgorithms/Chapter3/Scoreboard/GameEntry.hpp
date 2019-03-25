//
// Created by Antonin Durchanek on 2019-03-22.
//

#ifndef TESTS_GAMEENTRY_HPP
#define TESTS_GAMEENTRY_HPP

#include <iostream>


class GameEntry
{



public:


    GameEntry(const std::string & name = "", int score = 0);
    int getScore() const;
    std::string getName() const;







private:

    int score;
    std::string name;
};


#endif //TESTS_GAMEENTRY_HPP
