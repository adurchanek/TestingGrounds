//
// Created by Antonin Durchanek on 2019-03-26.
//


#ifndef TESTS_LINKEDLIST_HPP
#define TESTS_LINKEDLIST_HPP

#include <iostream>

template <typename T>
class LinkedList
{

public:

    LinkedList();
    ~LinkedList();
    void removeFront();
    bool isEmpty();
    void printNodes();


private:




    struct Node
    {
        T *value;
        Node * next;
    };


    Node* head;
};



#endif //TESTS_LINKEDLIST_HPP