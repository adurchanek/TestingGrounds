//
// Created by Antonin Durchanek on 2019-03-22.
//

#include "GameEntry.hpp"






std::string GameEntry::getName() const
{
    return name;
}

int GameEntry::getScore() const
{
    return score;
}

GameEntry::GameEntry(const std::string &name, int score)
: name(name), score(score)
{

}
