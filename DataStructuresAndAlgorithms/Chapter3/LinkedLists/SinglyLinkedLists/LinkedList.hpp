//
// Created by Antonin Durchanek on 2019-03-26.
//


#ifndef TESTS_LINKEDLIST_HPP
#define TESTS_LINKEDLIST_HPP

#include <iostream>
#include "../EmptyLinkedListException.hpp"

template <typename T>
class LinkedList
{

public:

    LinkedList();
    ~LinkedList();
    void removeFront();
    bool isEmpty() const;
    void printNodes() const;
    void addFront(const T& element);
    void clear();
    T getFront() const;

private:
    struct Node
    {
        T value;
        Node * next;
    };

    Node* head;
};

template<typename T>
LinkedList<T>::LinkedList()
:head(nullptr)
{

}

template<typename T>
LinkedList<T>::~LinkedList()
{
    while(!isEmpty())
    {
        removeFront();
    }
}

template<typename T>
void LinkedList<T>::removeFront()
{
    if(head != nullptr)
    {
        Node * temp  = head;
        head = temp->next;
        delete temp;
    }
    else
    {
        throw EmptyLinkedListException("linked list is empty");
    }
}

template<typename T>
bool LinkedList<T>::isEmpty() const
{
    return head == nullptr;
}

template<typename T>
void LinkedList<T>::printNodes() const
{
    Node * current = head;

    std::cout << "HEAD ->   ";

    while(current != nullptr)
    {


        std::cout << current->value;
        std::cout << "   ->   ";
        current =  current->next;
    }
    std::cout << "NULL" << std::endl;
}

template<typename T>
void LinkedList<T>::addFront(const T& element)
{
    Node *temp = new Node;
    temp->value =  element;
    temp->next = head;
    head = temp;

}

template<typename T>
void LinkedList<T>::clear()
{
    while(!isEmpty())
    {
        removeFront();
        printNodes();
    }

}

template<typename T>
T LinkedList<T>::getFront() const
{
//    if(head != nullptr)
//    {
//
//        return head->value;
//    }
//    else
//    {
//        throw EmptyLinkedListException("list is empty");
//    }

    return head != nullptr ? head->value : throw EmptyLinkedListException("list is empty");

}

#endif //TESTS_LINKEDLIST_HPP