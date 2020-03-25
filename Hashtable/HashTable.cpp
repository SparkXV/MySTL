#include<bits/stdc++.h>
using namespace std;
#define load_factor 50
/// load_factor= No of elements in Table/table_size

class Node{

    public:
        int key;
        int value;
        Node* next;
};

class HashTableNode{

    public:
    int bcount;
    Node* next;
};

class HashTable{

    public:
        int tsize;
        int nele;
        HashTableNode **Table;
};

class MyHashTable
{
    public:
    HashTable* createHashTable(int size){
        HashTable* h;
        h=(HashTable*)malloc(sizeof(HashTable));
        if(!h){
            return NULL;
        }
        h->tsize=size/load_factor;
        h->nele=0;
        h->Table=(HashTableNode**)malloc(sizeof(HashTable*)*h->tsize);
        if(!h->Table){
            return NULL;
        }
        for(int i=0;i<h->tsize;i++ ){
            h->Table[i]->bcount=0;
            h->Table[i]->next=NULL;
        }
        return h;
    }
    
    int Hash(int data,int s){
        return data%s;
    }

    int search(HashTable* h,int value){
        Node* temp;
        temp=h->Table[Hash(value,h->tsize)]->next;
        while(temp){
            if(temp->value==value){
                return 1;
            }
            temp=temp->next;
        }
        return 0; 
    }

    int put(HashTable* h,int value){

        if(Hash(value,t->size))
            return 0;
        int key=Hash(value,h->tsize);
        Node *temp=h->Table[key]->next;
        Node *nnode=new Node();
        if(!nnode){
            return -1;
        }
        nnode->key=key;
        nnode->value=value;
        nnode->next=

    }
};

int main()
{
    MyHashTable map;
    map.createHashTable(12);
}