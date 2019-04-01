//
// Created by Antonin Durchanek on 2019-03-27.
//



#include <iostream>
#include "DoublyLinkedList.hpp"
#include <string>

/* Example worked out from a data structures book
 * Main goal: to implement a doubly linked list
 *
 *
 * Secondary goal: improve C++ knowledge. Work on function templates
 * */



//int main()
//
//{
//    DoublyLinkedList<std::string> list;
//    list.addBack("A");
//    list.printNodes();
//    list.addFront("B");
//    list.addFront("C");
//    list.addBack("Z");
//    list.printNodes();
//    std::cout << list.getFront()<< std::endl;
//    std::cout << list.getBack() << std::endl;
//
//
//    list.removeFront();
//    list.printNodes();
//    list.removeBack();
//    list.printNodes();
//
//    list.removeFront();
//    list.printNodes();
//    list.removeBack();
//    //list.clear();
//
//    list.printNodes();
//
//
//    return 0;
//}