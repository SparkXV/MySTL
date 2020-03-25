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
        cout<<h<<" ";
    }
};

int main()
{
    MyHashTable map;
    map.createHashTable(12);
}