//
// Created by Antonin Durchanek on 2019-03-22.
//

#include "GameEntry.hpp"
#include "iostream"
#include "ScoreBoard.hpp"

/* Example worked out from a data structures book
 * Main goal: to implement an instance of a scoreboard which holds an array of "entries" which contain a score and a name
 * The add method adds the entry and shifts all other entries to the right if needed
 * The remove method removes an entry and shifts all entries to the left if needed
 *
 * Secondary goal: 1. Improve C++ knowledge. Work on try/catch + exceptions.
 * ''          '': 2. Overload the indexing operator.
 * ''          '': 3. Class Templates (Commented out in ScoreBoard.hpp)
 * */

//Uncomment main() below and comment out all other main() in the current directory to run

//int main()
//
//{
//    const int NUM_GAME_ENTRIES = 6;
//    const int MAX_GAME_ENTRIES = 10;
//
//    std::cout << "Game Entries"<< std::endl;
//
//    //ScoreBoard<GameEntry> sb{MAX_GAME_ENTRIES};
//    ScoreBoard sb{MAX_GAME_ENTRIES};
//
//    //GameEntry gameEntryArray[NUM_GAME_ENTRIES] = {{"Mike",1105},{"Rob", 750},{"Paul", 720},{"Anna",660},{"Rose", 590},{"Jack", 510}};
//
//    GameEntry gameEntryArray[NUM_GAME_ENTRIES] = {{"Jack", 510},{"Rob", 750},{"Paul", 720},{"Rose", 590},{"Anna",660},{"Mike",1105}};
//
//    for(int x = 0; x < NUM_GAME_ENTRIES; x++)
//    {
//        sb.add(gameEntryArray[x]);
//        //sb.printEntries();
//
//    }
//
//    try
//    {
//        std::cout << sb.getGameEntry(5).getName()<< std::endl;
//    }
//    catch (OutOfBoundsException &e)
//    {
//        std::cout << e.getError() << std::endl;
//    }
//
//    sb.printEntries();
//
//    GameEntry g = sb.remove(3);
//    sb.printEntries();
//    std::cout << g.getName();
//
//    //std::cout << sb[3].getName();
//    //sb[3] = g;
//
//    //sb.printEntries();
//
//    return 0;
//}