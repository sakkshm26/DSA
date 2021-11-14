#include <iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *prev;
    Node *next;
};

void linkedListTraversal(Node *head)
{
    Node *p = head;
    while (p!=NULL)
    {
        cout<<"Element : "<<p->data<<endl;
        p = p->next;
    }
    
    Node *q = head;
    cout<<"In reverse"<<endl;
    while (q->next!=NULL)
    {
        q = q->next;
    }

    while (q!=NULL)
    {
        cout<<"Element : "<<q->data<<endl;
        q = q->prev;
    }
}

int main()
{
    Node *head;
    Node *second;
    Node *third;
    Node *fourth;

    //Allocates memory for nodes in the linked lists in heap
    head = new Node();
    second = new Node();
    third = new Node();
    fourth = new Node();

    //Link first and second nodes
    head->data = 7;
    head->next = second;  
    head->prev = NULL;

    //Link second and third nodes
    second->data = 11;
    second->next = third;
    second->prev = head;

    //Link third and fourth nodes
    third->data = 41;
    third->next = fourth;
    third->prev = second;

    //Terminate list at the third node
    fourth->data = 66;
    fourth->next = NULL;
    fourth->prev = third;
    
    linkedListTraversal(head);
    
    return 0;
}
