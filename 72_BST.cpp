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

int isBST(Node *root)
{
    if(root!=NULL)
    {
        static Node *prev = NULL;
        if(!isBST(root->left))
        return 0;
        
        if(prev!=NULL && root->data<=prev->data)
        return 0;

        prev = root;

        return(isBST(root->right));
    }
    else return 1;
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
    cout<<isBST(p);

    return 0;
}