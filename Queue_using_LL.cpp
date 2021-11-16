#include <iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
};

Node *r = NULL;
Node *f = NULL;

void linkedlistTraversal(Node *ptr)
{
    while(ptr!=NULL)
    {
        cout<<"Element is "<<ptr->data<<endl;
        ptr = ptr->next;
    }
}

void enqueue(int val)
{
    Node *n = new Node();
    if(n==NULL)
    {
        cout<<"Queue is full"<<endl;
    }
    else
    {
        n->data = val;
        n->next = NULL;
        if(f==NULL)
        {
            f=r=n;
        }
        else
        {
            r->next = n;
            r = n;
        }
    }
}

int dequeue()
{
    int val = -1;
    Node *ptr = f;
    if(f==NULL)
    {
        cout<<"The queue is empty"<<endl;
    }
    else
    {
        f = f->next;
        val = ptr->data;
        free(ptr);
    }
    return val;
}

int main()
{
    enqueue(7);
    enqueue(8);
    enqueue(9);
    enqueue(10);
    cout<<"Dequeing element is "<<dequeue()<<endl;
    cout<<"Dequeing element is "<<dequeue()<<endl;
    cout<<"Dequeing element is "<<dequeue()<<endl;
    cout<<"Dequeing element is "<<dequeue()<<endl;
    linkedlistTraversal(f);

    return 0;
}
