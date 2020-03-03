#include<bits/stdc++.h>
#include"stack.h"
using namespace std;

int main()
{
    Mystack<int>s;
    s.push(13);
    s.push(15);
    s.push(14);
    s.push(17);
    while(s.empty()==false)
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    //cout<<s.getsize()<<" ";
    //cout<<s.top()<<" ";
    //s.pop();
    ///cout<<s.top()<<" ";
    //s.pop();
    //cout<<s.getsize()<<" ";
    return 0;
    
}
