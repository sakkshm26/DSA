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

Node *searchIter(Node *root, int key)
{
    while (root!=NULL)
    {
        if(key==root->data)
        return root;

        else if(key<root->data)
        root = root->left;

        else 
        root = root->right;
    }
    return NULL;
}

void insert(Node *root, int key)
{
    Node *prev = NULL;
    while(root!=NULL)
    {
        prev = root;
        if(root->data==key)
        cout<<"Cannot insert "<<key<<endl;
        else if(key < root->data)
        root = root->left;
        else 
        root = root->right;
    }
    Node *n = createNode(key);
    if(key<prev->data)
    prev->left = n;
    else
    prev->right = n;
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
    insert(p,7);
    cout<<p2->right->data;

    return 0;
}
