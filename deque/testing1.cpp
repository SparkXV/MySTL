#include<bits/stdc++.h>
#include "dequedl.h"
using namespace std;

int main()
{

    Mydeque<int>dq;
    dq.push_front(5);
    cout<<dq.getfront()<<" ";
    dq.push_back(7);
    cout<<dq.getback()<<" ";
    dq.pop_back();
    dq.pop_front();
    cout<<dq.getback()<<" ";
    cout<<dq.getsize()<<" ";
    return 0;
}