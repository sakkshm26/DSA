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

int main()
{
    /* //Constructing the root Node
    Node *p;
    p = new Node();
    p->data = 2;
    p->left = NULL;
    p->right = NULL;

    //Constructing the second Node
    Node *p1;
    p1 = new Node();
    p1->data = 1;
    p1->left = NULL; 
    p1->right = NULL;

    //Constructing the third Node
    Node *p2;
    p2->data = 4;
    p2 = new Node();
    p2->left = NULL;
    p2->right = NULL; */

    //Contructing the root node using function
    Node *p = createNode(2);
    Node *p1 = createNode(1);
    Node *p2 = createNode(4);

    //Linking the root Node with left and right children
    p->left = p1;
    p->right = p2; 

    return 0;
}