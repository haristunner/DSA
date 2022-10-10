#include<bits/stdc++.h>
using namespace std;

int main()
{
    std::stack<int> p ;
    int count=0;
    p.push(1);
    p.push(2);
    p.push(3);
    cout<<p.size()<<" ";
    p.pop();
    while(!p.empty())
    {
        cout<<p.top()<<" ";
        count++;
        p.pop();
    }
    cout<<count;
    return 0;
}
