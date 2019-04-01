//
// Created by Antonin Durchanek on 2019-03-26.
//


#include <iostream>
#include "LinkedList.hpp"
#include <string>

/* Example worked out from a data structures book
 * Main goal: to implement a basic linked list
 *
 *
 * Secondary goal: improve C++ knowledge. Work on function templates
 * */



//int main()
//
//{
//    LinkedList<std::string> list;
//    list.addFront("A");
//    list.addFront("B");
//    list.addFront("C");
//    list.printNodes();
//    list.clear();
//
//    list.printNodes();
//    try
//    {
//
//        list.getFront();
//
//    }
//    catch(const RuntimeException& e)
//    {
//
//        std::cout << e.getError() << std::endl;
//
//
//
//    }
//
//
//    //std::cout <<  << std::endl;
//
//    return 0;
//}