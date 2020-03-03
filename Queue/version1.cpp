#include<bits/stdc++.h>
#include "queue.h"
using namespace std;

int main()
{
    Myqueue<float>q;
    q.push(12.1);
    q.push(13.3);
    //cout<<q.getsize()<<"\n";
    //cout<<q.front()<<"\n";
    //cout<<q.pop()<<"\n";
    //cout<<q.getsize()<<"\n";
    q.push(14.2);
    //cout<<q.front()<<"\n";
    //q.pop();
    //cout<<q.front()<<"\n";
    
    while(q.empty()==false)
    {
        cout<<q.front()<<"\n";
        q.pop();
    }
    ///q.pop();
    //q.pop();
    //cout<<q.front()<<"\n";
}