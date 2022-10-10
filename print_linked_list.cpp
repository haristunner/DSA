#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
};

void print(Node* a){
    while(a!=NULL){
        cout<<a->data<<" ";
        a=a->next;
    }    
}

int main()
{
    Node *p, *q, *r;
    p=new Node();
    q=new Node();
    r=new Node();
    p->data=10;
    p->next=q;
    q->data=20;
    p->next->next=r;
    r->data=30;
    r->next=NULL;
    print(p);
    return 0;
}
