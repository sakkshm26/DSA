#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
};

void linkedListTraversal(Node *ptr)
{
    while(ptr!=NULL)
    {
        cout<<"Element : "<<ptr->data<<endl;
        ptr = ptr->next;
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

    //Link second and third nodes
    second->data = 11;
    second->next = third;

    //Link third and fourth nodes
    third->data = 41;
    third->next = fourth;

    //Terminate list at the third node
    fourth->data = 66;
    fourth->next = NULL;
    
    linkedListTraversal(head);
    
    return 0;
}
