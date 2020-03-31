#ifndef DEQUE_H
#define DEQUE_H

#define MAX 1000

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
};

template<typename T>
Mydeque<T>::Mydeque(int size){
    this->front=-1;
    this->rear=0;
    this->size=size;
}
template<typename T>
void Mydeque<T>::push_front(T data){
    this->front=this->front+1;
    array[this->front]=data;
}

template<typename T>
void Mydeque<T>::push_back(T data){
    arr
}
#endif