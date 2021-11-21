#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *left;
    Node *right;
};

Node *createNode(int data)
{
    Node *n; //Creating a Node pointer
    n = new Node(); //Allocating memory in the heap
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}

void preOrder(Node *root)
{
    if(root!=NULL)
    {
        cout<<root->data<<" ";
        preOrder(root->left);
        preOrder(root->right);
    }
}

int main()
{
    Node *p = createNode(4);
    Node *p1 = createNode(1);
    Node *p2 = createNode(6);
    Node *p3 = createNode(5);
    Node *p4 = createNode(2);

    //The tree looks like this
    /*     4
          / \
         1   6
        / \
       5   2     */

    //Linking the root node with left and right children
    p->left=p1;
    p->right=p2;
    p1->left=p3;
    p1->right=p4;
    preOrder(p);

    return 0;
}
