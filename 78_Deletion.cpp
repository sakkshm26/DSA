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

void inOrder(Node *root)
{
    if(root!=NULL)
    {
        inOrder(root->left);
        cout<<root->data<<" ";
        inOrder(root->right);
    }
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

Node *inOrderPredecessor(Node *root)
{
    root = root->left;
    while(root->right!=NULL)
    {
        root = root->right;
    }
    return root;
}

Node *deleteNode(Node *root, int key)
{
    Node *iPre;
    if(root==NULL)
    return NULL;
    if(root->left==NULL && root->right==NULL)
    {
        free(root);
        return NULL;
    }
    //Search for the node to be deleted
    if(key < root->data)
    root->left = deleteNode(root->left,key);
    else if(key > root->data)
    root->right = deleteNode(root->right,key);
    else
    {
        iPre = inOrderPredecessor(root);
        root->data = iPre->data;
        root->left = deleteNode(root->left,iPre->data);
    }
    return root;
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
    
    inOrder(p);
    if(searchIter(p,3))
    {
        deleteNode(p,3);
        cout<<endl;
        inOrder(p);
    }
    else
    {
        cout<<endl;
        cout<<"Node with this value is not present"<<endl;
    }
    return 0;
}