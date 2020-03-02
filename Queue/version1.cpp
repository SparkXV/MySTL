#include<bits/stdc++.h>
using namespace std;

template<typename T>
class Myqueue
{
    public:
    T *array;
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
    array=new T[1];
    size=1;
}

template<typename T>
void Myqueue<T>::push(T data)
{
    array[this->size-1]=data;
    this->size=this->size+1;
    T *temp=new T[size];
    for(int i=0;i<this->size-1;i++)
    {
        temp[i]=array[i];
    }
    delete[] array;
    array=temp;
}

template<typename T>
T Myqueue<T>::pop()
{
    T t=array[0];
    for(int i=0;i<this->size-1;i++)
    {
        array[i]=array[i+1];
    }
    this->size=this->size-1;
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
    Myqueue<float>q;
    q.push(12.1);
    q.push(13.3);
    //cout<<q.getsize()<<"\n";
    //cout<<q.front()<<"\n";
    //cout<<q.pop()<<"\n";
    //cout<<q.getsize()<<"\n";
    q.push(14.2);
    //cout<<q.front()<<"\n";
    //q.pop();
    //cout<<q.front()<<"\n";
    
    while(q.empty()==false)
    {
        cout<<q.front()<<"\n";
        q.pop();
    }
    ///q.pop();
    //q.pop();
    //cout<<q.front()<<"\n";
}