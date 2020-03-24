#ifndef HEAP_H
#define HEAP_H

template<typename T>
class MyPriorityQueue{
    public:
    T *array;
    int size;
    MyPriorityQueue();
    int top(){
        return array[0];
    }
    int getsize(){
        return this->size-1;
    }
    int pop();
    void push(T data);
    void print();
    void MinHeapify(int *a,int i,int n);
};

template<typename T>
MyPriorityQueue<T>::MyPriorityQueue(){
    array=new int[1];
    size=1;
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

template<typename T>
void MyPriorityQueue<T>::push(T data){

    int k=this->size-1;
    array[k]=data;
    this->size=this->size+1;
    int *temp=new int[size];
    for(int i=0;i<this->size-1;i++)
    {
        temp[i]=array[i];
    }
    delete[] array;
    array=temp;
    while(k!=0 && array[(k-1)/2]>array[k])
    {
        int t=array[k];
        array[k]=array[(k-1)/2];
        array[(k-1)/2]=t;
        k=(k-1)/2;
    }
}

template<typename T>
int MyPriorityQueue<T>::pop(){   // Top element will be removed

    int root=array[0];
    array[0]=array[this->size-2];
    this->size=this->size-1;
    MinHeapify(array,0,this->size-1);
    return root;
}

template<typename T>
void MyPriorityQueue<T>::print(){

    for(int i=0;i<this->size-1;i++)
    {
        std::cout<<array[i]<<" ";
    }
}
#endif