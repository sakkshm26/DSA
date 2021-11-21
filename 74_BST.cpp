#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int data;
    Node *right;
    Node *left;  
};

Node *createNode(int data)
{
    Node *n = new Node();
    n->data = data;
    n->right = NULL;
    n->left = NULL;
    return n;
}

Node *search(Node *root, int key)
{
    if(root==NULL)
    return NULL;
    
    if(root->data==key)
    return root;
    else if(root->data>key)
    return search(root->left,key);
    else
    return search(root->right,key);
    
}

int main()
{
     Node *p = createNode(5);
    Node *p1 = createNode(3);
    Node *p2 = createNode(6);
    Node *p3 = createNode(1);
    Node *p4 = createNode(4);

    /*     5
          / \
         3   6
        / \
       1   4     */

    p->left=p1;
    p->right=p2;
    p1->left=p3;
    p1->right=p4;
    Node *n = search(p,3);
    if(n!=NULL)
    cout<<"Found:"<<n->data<<endl;
    else
    cout<<"Element not found"<<endl;

    return 0;
}