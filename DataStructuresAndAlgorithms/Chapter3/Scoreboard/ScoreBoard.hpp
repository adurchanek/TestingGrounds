//
// Created by Antonin Durchanek on 2019-03-22.
//

#ifndef TESTS_SCOREBOARD_HPP
#define TESTS_SCOREBOARD_HPP

#include "GameEntry.hpp"
#include "RuntimeException.hpp"
#include "OutOfBoundsException.hpp"
#include <iostream>


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

    GameEntry& operator[](int i);




private:

    int maxEntries;
    int numEntries;
    GameEntry * entries;

};


#endif //TESTS_SCOREBOARD_HPP



/*
 *




 //
// Created by Antonin Durchanek on 2019-03-22.
//

#ifndef TESTS_SCOREBOARD_HPP
#define TESTS_SCOREBOARD_HPP

//#include "GameEntry.hpp"
#include "RuntimeException.hpp"
#include "OutOfBoundsException.hpp"
#include <iostream>

template <typename T>
class ScoreBoard
{

public:


    ScoreBoard(int maxEntries = 10);

    void add(const T &e);
    T remove( int i);
    ~ScoreBoard();



    int getMaxEntries();
    int getNumEntries();
    void printEntries();
    T getGameEntry(int i) const;

    T& operator[](int i);




private:

    int maxEntries;
    int numEntries;
    T * entries;

};



template <typename T>
ScoreBoard<T>::ScoreBoard(int mEntries)
        : maxEntries(mEntries)
{
    entries =  new T[mEntries];
    numEntries = 0;
}

template <typename T>
ScoreBoard<T>::~ScoreBoard()
{
    delete[] entries;
}

template <typename T>
int ScoreBoard<T>::getMaxEntries()
{
    return maxEntries;
}

template <typename T>
int ScoreBoard<T>::getNumEntries()
{
    return numEntries;
}

template <typename T>
void ScoreBoard<T>::printEntries()
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

template <typename T>
void ScoreBoard<T>::add(const T& e)
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
        T ge{"E M P T Y", 0};
        entries[count]  = ge;
        //printEntries();

        count--;
    }
    //std::cout << (count+1) << std::endl;

    entries[count+1] = e;
    //printEntries();

}

template <typename T>
T ScoreBoard<T>::remove(int i)
{
    if(i < 0 || i+1 > numEntries)
    {
        throw OutOfBoundsException("Invalid entry to remove");
    }

    T g = entries[i];
    numEntries--;
    int count = i;

    while (count < numEntries )
    {
        entries[count]  = entries[count+1];

        count++;
    }

    return g;
}

template <typename T>
T ScoreBoard<T>::getGameEntry(int index) const
{
    if(index > numEntries-1 || index < 0)
    {
        throw OutOfBoundsException("Out of bounds");
    }

    return entries[index];
}

template <typename T>
T& ScoreBoard<T>::operator[](int i)
{
    return entries[i];
}

#endif //TESTS_SCOREBOARD_HPP






 *
 *
 */
