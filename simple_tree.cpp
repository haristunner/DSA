#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;
    
    Node(int d)
    {
        data=d;
        left=NULL;
        right=NULL;
    }
};

int main()
{
    Node* root, *p, *q;
    root=new Node(1);
    p=root->left;
    p=new Node(2);
    q=root->right;
    q=new Node(3);
    cout<<p->data;
    return 0;
}
