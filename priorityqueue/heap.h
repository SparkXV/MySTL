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
        array=new int[10];
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
        int n=(this->size-1)/2;
        for(int i=n;i>=0;i--){
            heapify()
        }
    }
    void heapify(int)
    {
        int left=2*i+1;
        int right=2*i+2;
        int min=i;
        if(left<n && a[left]<a[i])
                min=left;
        if(right<n &&a[min]>a[right])
             min=right;
        if(min!=i)
        {
            int temp;
            temp=a[i];
            a[i]=a[min];
            a[min]=temp; 
            heapify(a,min,n);
        }
        return;
    }
}
#endif