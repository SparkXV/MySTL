#ifndef HEAP_H
#define HEAP_H

template<typename T>
class MyPriorityQueue{
    private:
    int *array;
    int size;
    //int capacity;
    Myheap()
    {
        array=new int[1];
        size=1;
        //capacity=1;
    }
    void push(int data)
    {
        array[this->size-1]=data;
        size=size+1;
        int *temp=new int[size];
        for(int i=0;i<this->size-1;i++)
        {
            temp[i]=array[i];
        }
        delete[] array;
        array=temp;
        heapify();
    }
    void buildheap()
    {
        
    }
    void heapify()
    {
        
    }
}
#endif