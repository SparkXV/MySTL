#include<bits/stdc++.h>
#include "heap.h"
using namespace std;

int main(){

    MyPriorityQueue<int>pq;
    pq.push(9);
    cout<<pq.top()<<" ";
    pq.push(8);
    pq.push(7);
    pq.push(5);
    pq.push(1);
    pq.push(6);
    
    //pq.print();
    return 0;
}
