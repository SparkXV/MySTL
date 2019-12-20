#include<bits/stdc++.h>
using namespace std;

class VecClass
{
	    public:
			int *array;
			int size;
		VecClass()
		{
			array=new int[1];
			size=1;
		}
		void push(int data)
		{
			array[size-1]=data;
			size=size+1;
			int *temp=new int[size];
			for(int i=0;i<size-1;i++)
			{
				 temp[i]=array[i];
			}
			delete[] array;
			array=temp;
		}
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
int main()
{
	VecClass v;
	v.push(12);
	v.push(30);
	v.push(45);
	v.push(60);
	v.getsize();                           // Size of vector
	v.print();
	/*
		for(int i=0;i<v.getsize();i++)
		{
			cout<<v.array[i]<<" ";
		}
	*/
	v.update(1,67);                         // Update the element at particular index
	cout<<v.getsize()<<" ";
	v.pop();
	cout<<v.getsize()<<" ";
	v.push(40);
	cout<<v.getsize()<<" ";

	return 0;
}
