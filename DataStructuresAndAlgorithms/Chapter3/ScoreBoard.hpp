//
// Created by Antonin Durchanek on 2019-03-22.
//

#ifndef TESTS_SCOREBOARD_HPP
#define TESTS_SCOREBOARD_HPP

#include "GameEntry.hpp"
#include "RuntimeException.hpp"
#include "OutOfBoundsException.hpp"


class ScoreBoard
{

public:



    void add(const GameEntry &e);
    GameEntry remove( int i);
    ~ScoreBoard();

    explicit ScoreBoard(int maxEntries = 10);

    int getMaxEntries();
    int getNumEntries();
    void printEntries();
    GameEntry getGameEntry(int i) const;




private:

    int maxEntries;
    int numEntries;
    GameEntry * entries;

};


#endif //TESTS_SCOREBOARD_HPP
