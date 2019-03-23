//
// Created by Antonin Durchanek on 2019-03-22.
//

#ifndef TESTS_SCOREBOARD_HPP
#define TESTS_SCOREBOARD_HPP

#include "GameEntry.hpp"
#include "RuntimeException.hpp"


class ScoreBoard
{

public:



    void add(GameEntry e, int i);
    void remove( int i);
    ~ScoreBoard();
    ScoreBoard(int maxEnties = 10);



private:

    int maxEntries;
    int numEntries;
    GameEntry * entries;

};


#endif //TESTS_SCOREBOARD_HPP
