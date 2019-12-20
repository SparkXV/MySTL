/*
 * vector.cpp
 *
 *  Created on: Dec 20, 2019
 *      Author: Dell
 */

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
	/*
	for(int i=0;i<v.getsize();i++)       This is also working
	{
		cout<<v.array[i]<<" ";
	}
	*/
	return 0;
}


