//
// Created by Antonin Durchanek on 2019-03-26.
//

#include "LinkedList.hpp"



template<typename T>
LinkedList<T>::LinkedList()
{
    head = nullptr;
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
}

template<typename T>
bool LinkedList<T>::isEmpty()
{
    return head == nullptr;
}

template<typename T>
void LinkedList<T>::printNodes()
{
    Node * current = head;

    while(current != nullptr)
    {
        std::cout << current->value << std::endl;
        current =  current->next;
    }

}

