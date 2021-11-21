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

vector<int> inOrderTraversal(Node *root)
{
    vector<int> inOrder;
    stack<Node*> s;
    Node *n = root;
    while(true)
    {
        if(n!=NULL)
        {
            s.push(n);
            n = n->left;
        }
        else
        {
            if(s.empty()==true) break;
            n = s.top();
            s.pop();
            inOrder.push_back(n->data);
            n = n->right;
        }
    }
    return inOrder;
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
    
    vector<int> v = inOrderTraversal(p);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }

    return 0;
}