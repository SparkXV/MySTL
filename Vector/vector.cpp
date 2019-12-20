
#include<bits/stdc++.h>
using namespace std;

class VecClass
{
<<<<<<< HEAD
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
=======
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
		array=temp;
	}
	void pop()
	{

	}
	void update()
	{

	}
	int getsize()
	{
		return size-1;
	}
	void print()
	{
		for(int i=0;i<this->size-1;i++)
>>>>>>> 5af8a4a062c9bfad3836fe19b9848d52108fadfe
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
	v.update(1,67);               // Update the element at particular index
	cout<<"\n";
	v.print();
	cout<<v.getelementatIndex(4);
	v.pop();
	v.print();
	return 0;
}


