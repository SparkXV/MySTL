#ifndef STACK_H
#define STACK_H

template<typename T>
class Mystack
{
    public:
    T *array;
    int size;
    Mystack();
    void push(T data);
    void pop();
    T top();
    int getsize();
    bool empty();
};
template<typename T>
Mystack<T>::Mystack()
{
    this->array=new T[1];
    this->size=0;
}

template<typename T>
void Mystack<T>::push(T data)
{
    array[this->size]=data;
    this->size=this->size+1;
}

template<typename T>
void Mystack<T>::pop()
{
    this->size=this->size-1;
}

template<typename T>
T Mystack<T>::top()
{
    return this->array[this->size-1];
}

template<typename T>
int Mystack<T>::getsize()
{
    return this->size;
}

template<typename T>
bool Mystack<T>::empty()
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

#endif