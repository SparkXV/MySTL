#ifndef DEQUE_H
#define DEQUE_H

template<typename T>
class Mydeque{
    public:
        void push_front(int data);
        void push_back(int data);
        int pop_front();
        int pop_back();
        int getsize();
        bool empty();
        int front();
        int back();
};
#endif