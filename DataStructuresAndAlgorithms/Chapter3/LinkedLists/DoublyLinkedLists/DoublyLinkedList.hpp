//
// Created by Antonin Durchanek on 2019-03-27.
//

#ifndef TESTS_DOUBLYLINKEDLIST_HPP
#define TESTS_DOUBLYLINKEDLIST_HPP



#include <iostream>
#include "../EmptyLinkedListException.hpp"

template <typename T>
class DoublyLinkedList
{

private:
    struct Node
    {
        T value;
        Node * next;
        Node * prev;
    };

    Node* head;
    Node* tail;

public:

    DoublyLinkedList();
    ~DoublyLinkedList();

    T getFront() const;
    T getBack() const;

    void addFront(const T& element);
    void addBack(const T& element);

    void removeFront();
    void removeBack();


    bool isEmpty() const;
    void printNodes() const;

    void clear();

protected:

    void add(Node* oldElement, const T& newElement);
    void remove(Node* oldElement);

};

template<typename T>
DoublyLinkedList<T>::DoublyLinkedList()
{
    head = new Node;
    tail = new Node;
    head->next = tail;
    tail->prev = head;
    head->value = "HEAD-";
    tail->value = "TAIL-";
}

template<typename T>
DoublyLinkedList<T>::~DoublyLinkedList()
{
    while(!isEmpty())
    {
        removeFront();

    }

    delete head;
    delete tail;
    head = nullptr;
    tail = nullptr;
}

template<typename T>
void DoublyLinkedList<T>::removeFront()
{
    if(head->next != tail)
    {
        remove(head->next);
    }
    else
    {
        throw EmptyLinkedListException("linked list is empty");
    }
}

template<typename T>
void DoublyLinkedList<T>::removeBack()
{
    if(head->next != tail)
    {
        remove(tail->prev);
    }
    else
    {
        throw EmptyLinkedListException("linked list is empty");
    }
}

template<typename T>
bool DoublyLinkedList<T>::isEmpty() const
{
    return (head->next == tail);
}

template<typename T>
void DoublyLinkedList<T>::printNodes() const
{
    Node * current = head;

    while(current != tail)
    {
        std::cout << current->value;
        std::cout << "   ->   ";
        current =  current->next;
    }
    std::cout << "TAIL"  << std::endl;
}

template<typename T>
void DoublyLinkedList<T>::addFront(const T& element)
{
    add(head,element);
}

template<typename T>
void DoublyLinkedList<T>::addBack(const T &element)
{
    add(tail->prev,element);
}

template<typename T>
void DoublyLinkedList<T>::add( Node *oldElement, const T &newElement)
{

    Node *temp = new Node;
    temp->value =  newElement;
    temp->next = oldElement->next;
    temp->prev = oldElement;
    temp->next->prev = temp;
    oldElement->next = temp;
}

template<typename T>
void DoublyLinkedList<T>::clear()
{
    while(!isEmpty())
    {
        removeFront();
    }
}

template<typename T>
void DoublyLinkedList<T>::remove(Node *oldElement)
{
    Node* temp  = oldElement;

    oldElement->prev->next = oldElement->next;

    oldElement->next->prev = oldElement->prev;

    delete temp;
}

template<typename T>
T DoublyLinkedList<T>::getFront() const
{
    return head->next != tail ? head->next->value : throw EmptyLinkedListException("list is empty");
}

template<typename T>
T DoublyLinkedList<T>::getBack() const
{
    return tail->prev != head ? tail->prev->value : throw EmptyLinkedListException("list is empty");
}


#endif //TESTS_DOUBLYLINKEDLIST_HPP
