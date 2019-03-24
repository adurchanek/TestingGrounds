//
// Created by Antonin Durchanek on 2019-03-22.
//

#include "ScoreBoard.hpp"

ScoreBoard::ScoreBoard(int mEntries)
: maxEntries(mEntries)
{
    entries =  new GameEntry[mEntries];
    numEntries = 0;
}

ScoreBoard::~ScoreBoard()
{
    delete[] entries;
}

int ScoreBoard::getMaxEntries()
{
    return maxEntries;
}

int ScoreBoard::getNumEntries()
{
    return numEntries;
}

void ScoreBoard::printEntries()
{


    int count  = 0;
    while(count < numEntries)
    {
        std::cout << "[ " << entries[count].getName() << ": " << entries[count].getScore() << " ]";
        count++;
    }


    while(count < maxEntries)
    {
        std::cout << "[ " << "         "  << " ]";
        count++;
    }
    std::cout << std::endl;

    count = 0;

    std::cout  << "       ";
    while(count < maxEntries)
    {
        std::cout << count << "            ";
        count++;
    }
    std::cout << std::endl;

}

void ScoreBoard::add(const GameEntry& e)
{
    //entries[i] = e;

    if(numEntries == maxEntries)
    {
        if(e.getScore() <= entries[numEntries-1].getScore())
        {
            //std::cout << "[ " << entries[numEntries-1].getName() << ": " << entries[numEntries-1].getScore() << " ]";
            //entries[numEntries] = e;
            return;
        }

    }

//    if(numEntries == 0)
//    {
//        entries[0] = e;
//        numEntries++;
//
//        return;
//    }
//





    numEntries++;
    int count = numEntries - 2;

    while (count >= 0 &&entries[count].getScore() < e.getScore() )
    {

        entries[count+1]  = entries[count];
        GameEntry ge{"E M P T Y", 0};
        entries[count]  = ge;
        //printEntries();

        count--;
    }
    //std::cout << (count+1) << std::endl;

    entries[count+1] = e;
    //printEntries();

}

GameEntry ScoreBoard::remove(int i)
{
    if(i < 0 || i+1 > numEntries)
    {
        throw OutOfBoundsException("Invalid entry to remove");
    }

    GameEntry g = entries[i];
    numEntries--;
    int count = i;

    while (count < numEntries )
    {
        entries[count]  = entries[count+1];

        count++;
    }

    return g;
}

GameEntry ScoreBoard::getGameEntry(int index) const
{
    if(index > numEntries-1)
    {
        throw OutOfBoundsException("Out of bounds");
    }

    return entries[index];
}



