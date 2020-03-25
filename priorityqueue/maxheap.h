#ifndef MAXHEAP_H
#define MAXHEAP_H

template<typename T>
class MyPriorityQueue{
    private:
    int *array;
    int size;
    //int capacity;
    public:
    MyPriorityQueue();
    int top()
    {
        return array[0];
    }
    int getsize(){
        return this->size-1;
    }
    int pop();
    void push(T data);
    void print();
    /*
    void buildheap()
    {
        int n=(this->size-1)/2;
        for(int i=n;i>=0;i--){
            MinHeapify(array,0,this->size-1);
        }
    }
    */
    void MaxHeapify(int *a,int i,int n);
};

template<typename T>
MyPriorityQueue<T>::MyPriorityQueue(){
    array=new int[1];
    size=1;
}

template<typename T>
void MyPriorityQueue<T>::MaxHeapify(int *a,int i,int n){
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
    while(k!=0 && array[(k-1)/2]<array[k])
    {
        int t=array[k];
        array[k]=array[(k-1)/2];
        array[(k-1)/2]=t;
        k=(k-1)/2;
    }
}

template<typename T>
int MyPriorityQueue<T>::pop(){   // Top element is removed and last element shifted from last to top,then Maxhapify called.

    int root=array[0];
    array[0]=array[this->size-2];
    this->size=this->size-1;
    MaxHeapify(array,0,this->size-1);
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