#include<bits/stdc++.h>
using namespace std;
#define load_factor 20
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
        h->Table=(HashTableNode**)malloc(sizeof(HashTableNode*)*h->tsize);
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

    void rehash(HashTable* h){
        int key,oldsize;
        HashTableNode **oldtable;
        oldsize=h->tsize;
        oldtable=h->Table;
        h->tsize=h->tsize*2;
        h->Table==(HashTableNode**)malloc(sizeof(HashTableNode *)*h->tsize);
        for(int i=0;i<oldsize;i++){
            Node *temp=oldtable[i]->next;
            Node* temp2;
            while(temp)
            {
                key=Hash(temp->value,h->tsize);
                temp2=temp;
                temp2->next=h->Table[key]->next;
                h->Table[key]->next=temp2;
                temp=temp->next;
            }
        }
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

        if(Hash(value,h->tsize))
            return 0;
        int key=Hash(value,h->tsize);
        Node *temp=h->Table[key]->next;
        Node *nnode=new Node();
        if(!nnode){
            return -1;
        }
        nnode->key=key;
        nnode->value=value;
        nnode->next=h->Table[key]->next;
        h->Table[key]->next=nnode;
        h->Table[key]->bcount++;
        h->nele++;
        if(h->nele/h->tsize>load_factor){
            rehash(h);
        }
        return 1;
    }
    
    int remove(HashTable *h,int value){

        Node* curr,*prev;
        int key=Hash(value,h->tsize);
        curr=h->Table[key]->next;
        if(curr->value==value){
            h->Table[key]->next=curr->next;
            free(curr);
            h->nele--;
            h->Table[key]->bcount--;
        }
        else{
            while(curr)
            {
                if( prev!=NULL && curr->value==value){
                    prev->next=curr->next;
                    h->nele--;
                    h->Table[key]->bcount--;
                    free(curr);
                    return 1;
                }
                prev=curr;
                curr=curr->next;
            }
            return 0;
        }    
    }
};

int main()
{
    MyHashTable map;
    HashTable *h=map.createHashTable(20);
    map.put(h,23);
    if(map.search(h,19))
    {
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    return 0;
}