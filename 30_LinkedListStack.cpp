#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

Node *top = NULL; //Global variable

void linkedListTraversal(Node *ptr)
{
    while(ptr!=NULL)
    {
        cout<<"Element : "<<ptr->data<<endl;
        ptr = ptr->next;
    }
}

int isEmpty(Node *top)
{
    if (top == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(Node *top)
{
    Node *p = new Node();
    if (p == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

Node *push(Node *top, int x)
{
    if(isFull(top))
    {
        cout<<"Stack overflow!"<<endl;
    }
    else
    {
        Node *n = new Node();
        n->data = x;
        n->next = top;
        top = n;
    }
        return top;
}

int pop(Node *tp)
{
    if (isEmpty(tp))
    {
        cout<<"Stack underflow!"<<endl;
        return 1;
    }
    else
    {
        Node *n = tp;
        top = tp->next;
        int x = n->data;
        free(n);
        return x;
    }
}

int main()
{
    top = push(top, 78);
    top = push(top, 7);
    top = push(top, 8);
    int element = pop(top);
    cout<<"Popped element is : "<<element<<endl;
    linkedListTraversal(top);
    return 0;
}

