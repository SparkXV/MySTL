#ifndef DEQUEDL_H
#define DEQUEDL_H

                    /*   
                        Implementation using Doubly Singly Linked List    
                                                                        */

template<typename T>
class Node
{
    T data;
    Node* next;
    Node* prev;
    Node();
};

template<typename T>
Node<T>::Node(T data){
    this->data=data;
    this->next=NULL;
    this->prev=NULL;
}
#endif