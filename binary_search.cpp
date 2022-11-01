#include <iostream>
using namespace std;

int main()
{
    int a[]={2,4,6,8,9,11,23,56,78,99};
    int n=sizeof(a)/sizeof(a[0]);
    int x=99,mid,start=0,end=n-1;
    while(end>=start)
    {
        mid=(start+end)/2;
        if(a[mid]==x){
            cout<<"yes";
            return 0;
        }
        else if(a[mid]<x)
            start=mid+1;
            
        else if(a[mid]>x)
            end=mid-1;
    }
    cout<<"no";
    return 0;
}
