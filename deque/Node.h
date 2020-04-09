#ifndef NODE_H
#define NODE_H

template<typename T>
class Node
{
    private:
    T data;
    Node* next;
    Node* prev;
    Node(T data)
    {
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
    }
    friend class Mydeque; 
};

#endif