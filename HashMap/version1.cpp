/*
 * version1.cpp
 *
 *  Created on: Dec 21, 2019
 *      Author: Dell
 */

#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int key;
    int value;
    struct Node* next;
};
class MyHashMap
{
public:

    Node *head;
    MyHashMap() {
        head=NULL;
    }

    /** value will always be non-negative. */
    void put(int key, int value)
    {
          if(head==NULL)
          {
              struct Node* temp=new Node();
              temp->key=key;
              temp->value=value;
              temp->next=NULL;
              head=temp;
          }
          else
          {
                   struct Node* curr=head;
                   int f=0;
                   while(curr!=NULL)
                   {
                       if(curr->key==key)
                       {
                          curr->value=value;
                          f=1;
                          break;
                       }
                       curr=curr->next;
                   }
                   if(f==0)
                   {
                      struct Node* temp=new Node();
                      temp->key=key;
                      temp->value=value;
                      temp->next=NULL;
                      temp->next=head;
                      head=temp;
                    }
          }
    }

    int get(int key)
    {
           if(head==NULL)
               return -1;
           struct Node* curr=head;
           while(curr!=NULL)
           {
               if(curr->key==key)
               {
                  return curr->value;
               }
               curr=curr->next;
           }
        return -1;
    }

    void remove(int key)
    {
        if(head==NULL)
            return;

       if(head->key==key)
       {
           head=head->next;
       }
       else
       {
           struct Node* curr=head;
           struct Node*prev=head;
           while(curr!=NULL)
           {
               if(curr->key==key)
               {
                   prev->next=curr->next;
                   break;
               }
               prev=curr;
               curr=curr->next;
           }
       }
    }
};

int main()
{
	/* 1st way
	MyHashMap hashMap;

	hashMap.put(1, 1);
	hashMap.put(2, 2);
	cout<<hashMap.get(1)<<" ";            // returns 1]
	cout<<hashMap.get(3)<<" ";            // returns -1 (not found)
	hashMap.put(2, 4);          // update the existing value
	cout<<hashMap.get(2)<<" ";            // returns 1
	hashMap.remove(2);          // remove the mapping for 2
	cout<<hashMap.get(2)<<" ";            // returns -1 (not found)

	*/
	MyHashMap *hashMap=new MyHashMap();    // hashmap is pointer to the object of class MyHashMap

	hashMap->put(1, 1);
	hashMap->put(2, 2);
	cout<<hashMap->get(1)<<" ";            // returns 1]
	cout<<hashMap->get(3)<<" ";            // returns -1 (not found)
	hashMap->put(2, 4);          // update the existing value
	cout<<hashMap->get(2)<<" ";            // returns 1
	hashMap->remove(2);          // remove the mapping for 2
	//cout<<hashMap->get(2)<<" ";            // returns -1 (not found)

	return 0;
}




