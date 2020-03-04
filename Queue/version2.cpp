#include "../Stack/stack.h"
#include "queue.h"
#include<bits/stdc++.h>
using namespace std;

template<typename T>
class Myqueue
{
    public:
    Mystack<T>s1;
    Mystack<T>s2;
    int size;
    Myqueue();
    void push(T data);
    T pop();
    T front();
    int getsize();
    void print();
    bool empty();
};


template<typename T>
Myqueue<T>::Myqueue()
{
    
}

template<typename T>
void Myqueue<T>::push(T data)
{
    this->s1.push(data);
}

template<typename T>
T Myqueue<T>::pop()
{
    while(this->s1.empty()==false)
    {
        this->s2.push(this->s1.top())
        this->s1.pop();
    }
    int te=s2.pop();
    while(this->s2.empty()==false)
    {
        this->s1.push(this->s2.top())
        this->s2.pop();
    }
    return t;
}

template<typename T>
T Myqueue<T>::front()
{
     return this->array[0];
}

template<typename T>
int Myqueue<T>::getsize()
{
    return this->size-1;
}

template<typename T>
bool Myqueue<T>::empty()
{
    if(this->getsize()>0)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
      Mystack<int>s1;
      Mystack<int>s2;
      Myqueue<int>
      s.push(33);
      s.pop();
      
}