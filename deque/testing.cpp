#include<bits/stdc++.h>
#include "deque.h"
using namespace std;

int main(){

    Mydeque<int>dq(5);
    dq.push_front(5);
    cout<<dq.getfront()<<" ";
    dq.push_back(7);
    cout<<dq.getback()<<" ";
    dq.pop_back();
    dq.pop_front();
    cout<<dq.getback()<<" ";
    return 0;
}