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
        for(int )
    }
};

int main()
{
    MyHashTable map;
    map.createHashTable(12);
}