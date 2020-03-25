#include<bits/stdc++.h>
//#include "heap.h"
#include "maxheap.h"
using namespace std;


int main(){

    MyPriorityQueue<int>pq;
    /*
    pq.push(9);
    pq.push(8);
    pq.push(7);
    pq.push(2);
    pq.push(3);
    pq.push(1);
    //cout<<pq.top()<<" ";
    cout<<pq.pop()<<" ";
    //cout<<pq.getsize()<<" ";
    //cout<<pq.top()<<" ";
    
    //pq.print();
    */
    pq.push(1);
    pq.push(8);
    pq.push(7);
    //cout<<pq.top()<<" ";
    pq.push(2);
    pq.push(3);
    pq.push(9);
    //cout<<pq.top()<<" ";
    //cout<<pq.pop()<<" ";
    //cout<<pq.getsize()<<" ";
    //cout<<pq.top()<<" ";
    
    pq.print();
    return 0;
}
