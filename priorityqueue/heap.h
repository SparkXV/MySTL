#ifndef HEAP_H
#define HEAP_H

template<typename T>
class MyPriorityQueue{
    private:
    int *array;
    int size;
    //int capacity;
    public:
    Myheap()
    {
        array=new int[10];
        size=1;
        //capacity=1;
    }
    int top()
    {
        return array[0];
    }
    int getsize()  return this->size-1;
    void pop()
    {
        array[0]=array[this->size-1];
        this->size=this->size-1;
        int n=(this->size-1)/2;
        //for(int i=n;i>=0;i--){
            MinHeapify(array,0,this->size-1);
        //}   
    }
    void push(T data);
    void buildheap()
    {
        int n=(this->size-1)/2;
        for(int i=n;i>=0;i--){
            MinHeapify(array,0,this->size-1);
        }
    }
    void MinHeapify(int *a,int i,int n);
   // void MaxHeapify();
}

template<typename T>
void MyPriorityQueue<T>::MinHeapify(int *a,int i,int n){
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
        MinHeapify(a,min,n);
    }
    return;    
}

/*
template<typename T>
void MyPriorityQueue<T>::MaxHeapify(){
    int left=2*i+1;
    int right=2*i+2;
    int max=i;
    if(left<n && a[left]>a[i])
        max=left;
    if(right<n &&a[max]<a[right])
        max=right;
    if(max!=i)
    {
        int temp;
        temp=a[i];
        a[i]=a[max];
        a[max]=temp; 
        MaxHeapify(a,max,n);
    }
    return;    
}
*/
template<typename T>
void MyPriorityQueue<T>::push(T data){
    array[this->size-1]=data;
    size=size+1;
    int *temp=new int[size];
    for(int i=0;i<this->size-1;i++)
    {
        temp[i]=array[i];
    }
    delete[] array;
    array=temp;
    MinHeapify(a,0,this->size-1);
}
#endif