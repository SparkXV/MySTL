#include<bits/stdc++.h>
#include "heap.h"
using namespace std;


int main(){

    MyPriorityQueue<int>pq;
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
    return 0;
}
