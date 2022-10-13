#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    
    Node(int d, Node* n){
        data=d;
        next=n;
    }
};
void insert(Node* prev, Node* newn)
    {
        //newn->next=prev->next;
        prev->next=newn;
    }

void print(Node* a){
    while(a!=NULL){
        cout<<a->data<<" ";
        a=a->next;
    }    
}

void delete_node(Node* prev, Node* newn){
    prev->next=newn->next;
    newn->next=NULL;
}

int main()
{
    Node* p, *q, *r;
    q=new Node(20,NULL);
    p=new Node(10,q);
    r=new Node(30,q);
    insert(p, r);
    print(p);
    delete_node(p, r);
    print(p);
    return 0;
}
