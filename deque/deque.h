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
        int front();
        int back();
};

template<typename T>
Mydeque<T>::Mydeque(int size){

}
template<typename T>
void Mydeque<T>::push_front(T data){

}
#endif