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

vector<int> postOrderTraversal(Node *root)
{
    vector<int> postOrder;
    if(root==NULL) return postOrder;
    stack<Node*> s1,s2;
    s1.push(root);
    while(!s1.empty())
    {
        root = s1.top();
        s1.pop();
        s2.push(root);
        if(root->left!=NULL)
        s1.push(root->left);
        if(root->right!=NULL)
        s1.push(root->right);
    }
    while(!s2.empty())
    {
        postOrder.push_back(s2.top()->data);
        s2.pop();
    }
    return postOrder;
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
    
    vector<int> v = postOrderTraversal(p);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }

    return 0;
}
