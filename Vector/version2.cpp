#include<bits/stdc++.h>
using namespace std;

template<typename T>
class VecClass
{
	    public:
			T *array;
			int size;
		VecClass();
		void push(T data);
		void pop()
		{
              this->size=this->size-1;
		}
		int getelementatIndex(int i)
		{
			return array[i];
		}
		void update(int index,int data)
		{
			   array[index]=data;
		}
		int getsize()
		{
			return size-1;
		}
		void print()
		{
			for(int i=0;i<this->size-1;i++)
			{
				cout<<array[i]<<" ";
			}
		}

};
template<typename T>
VecClass<T>::VecClass()
{
	array=new T[1];
    size=1;
}
template<typename T>
void VecClass<T>::push(T data)
{
	array[size-1]=data;
	size=size+1;
	T *temp=new T[size];
	for(int i=0;i<size-1;i++)
	{
		 temp[i]=array[i];
	}
	delete[] array;
	array=temp;
}
int main()
{
	VecClass<int >v;
	v.push(12);
	v.push(303);
	v.push(454);
	v.push(606);
	v.getsize();                           // Size of vector
	v.print();
	/*
		for(int i=0;i<v.getsize();i++)
		{
			cout<<v.array[i]<<" ";
		}
	*/
	v.update(1,677);                         // Update the element at particular index
	cout<<"\n";
	v.print();
	v.pop();
	v.push(40.4);
    v.print();
	return 0;
}


