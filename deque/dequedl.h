#ifndef DEQUEDL_H
#define DEQUEDL_H
//#include "Node.h"


                    /*   
                        Implementation using Doubly Singly Linked List    */

template<typename T>
class Node
{
    private:
    int data;
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

template<typename T>
class Mydeque
{
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
    int getsize();
    int getfront();
    int getback();      
};

template<typename T>
Mydeque<T>::Mydeque()
{
    this->front=NULL;
    this->rear=NULL;
    this->size=0;
}
template<typename T>
void Mydeque<T>::push_front(T data){

    Node* temp=new Node(data);
    if(temp==NULL){
        std::cout<<"Memory Error"<<"\n";
        return;
    }
    else
    {
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

template<typename T>
void Mydeque<T>::push_back(T data){
    Node* temp=new Node(data);
    if(temp==NULL){
        std::cout<<"Memory Error"<<"\n";
        return;
    }
    else
    {
        if(this->rear==NULL)
        {
            this->rear=this->front=temp;
        }
        else
        {
            temp->prev=this->rear;
            this->rear->next=temp;
            this->rear=temp;
        }  
    }
    size++;
}

template<typename T>
void Mydeque<T>::pop_front(){

    if(empty()){
        std::cout<<"Segementation Fault"<<"\n";
        return;
    }
    else
    {
        Node *temp=this->front;
        this->front=this->front->next;
        if(this->front==NULL)
        {
            rear=NULL;
        }
        else
        {
            this->front->prev=NULL;
        }
        free(temp);
        size--;
    }
}

template<typename T>
void Mydeque<T>::pop_back()
{
    if(empty())
    {
        std::cout<<"Segementation Fault"<<"\n";
        return;
    }
    else
    {
        Node *temp=this->rear;
        this->rear=this->rear->prev;
        if(this->rear==NULL)
        {
            front=NULL;
        }
        else
        {
            this->rear->next=NULL;
        }
        free(temp);
        size--;
    }
}

template<typename T>
bool Mydeque<T>::empty(){ 
    return front==NULL;
}

template<typename T>
int Mydeque<T>::getsize(){
   return size;
}

template<typename T>
int Mydeque<T>::getfront(){
    if (empty()) 
    { 
        std::cout << "Underflow" << "\n";
        return -1 ; 
    } 
    return this->front->data;
}

template<typename T>
int Mydeque<T>::getback(){
    if(empty()) 
    { 
        std::cout << " Underflow" << "\n";
        return -1 ; 
    } 
    return this->rear->data;
}



#endif