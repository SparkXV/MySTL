#ifndef DEQUEDL_H
#define DEQUEDL_H

                    /*   
                        Implementation using Doubly Singly Linked List    
                                                                        */

template<typename T>
class Node
{
    public:
    T data;
    Node* next;
    Node* prev;
    Node(T data);
};

template<typename T>
Node<T>::Node(T data){
    this->data=data;
    this->next=NULL;
    this->prev=NULL;
}

template<typename T>
class Mydeque{
    public:
    Node *front;
    Node *rear;
    int size;
    Mydeque();
    void push_front(T data);
    void push_back(T data);
    void pop_front();
    void pop_back();
    bool empty();
    int getfront();
    int getback();
    bool isfull();        
}
template<typename T>
Mydeque<T>::Mydeque(){
    this->front=NULL:
    this->rear=NULL;
    this->size=0;
}
template<typename T>
void Mydeque<T>::push_front(T data){

    Node* temp=new Node(data);
    if(temp==NULL){
        cout<<"Memory_Error"<<"\n";
    }
    else{
        if(this->front==NULL)
        {
            this->rear=this->front=temp;
        }
        else
        {
            this->front->prev=temp;
            temp->next=this->front;
            this->front=temp;
        }  
    }
    this->size++;
}
#endif