#ifndef DEQUE_H
#define DEQUE_H

#define MAX 1000

                                /* Implementation using Circular Array */

template<typename T>
class Mydeque{
    public:
        int front;
        int rear;
        T array[MAX];
        int size;
        Mydeque(int size);
        void push_front(T data);
        void push_back(T data);
        void pop_front();
        void pop_back();
        int getsize();
        bool empty();
        int getfront();
        int getback();
        bool isfull();
};

template<typename T>
Mydeque<T>::Mydeque(int size){
    this->front=-1;
    this->rear=0;
    this->size=size;
}
template<typename T>
void Mydeque<T>::push_front(T data){
    if(isfull()){
        std::cout<<"Overflow"<<"\n";
        return;
    }
    if(front==-1){
        this->front=0
        this->rear=0;
    }
    else if(front==0){
        this->front=this->size-1;
    }
    else{
        this->front=this->front-1;
    }
    array[this->front]=data;
}

template<typename T>
void Mydeque<T>::push_back(T data){

    if(isfull()){
        std::cout<<"Overflow"<<"\n";
        return;
    }
    if(front == -1){
        front = 0;
        rear = 0;
    }
    else if(rear == size - 1)
        rear = 0;
    else
        rear=rear+1;
    array[this->rear]=data;
}

template<typename T>
bool Mydeque<T>::isfull(){

    return (front==0 && rear==size-1) || front==rear+1;
}

template<typename T>
bool Mydeque<T>::empty(){ 
    return front==-1;
}

template<typename T>
int Mydeque<T>::
#endif