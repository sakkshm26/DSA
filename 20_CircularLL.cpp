#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;
};

void linkedListTraversal(Node *head)
{
    Node *ptr = head;
    do
    {
        cout<<"Element is "<<ptr->data<<endl;
        ptr = ptr->next;  
    } while (ptr!=head);
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
    head->data = 4;
    head->next = second;  

    //Link second and third nodes
    second->data = 3;
    second->next = third;

    //Link third and fourth nodes
    third->data = 6;
    third->next = fourth;

    //Terminate list at the third node
    fourth->data = 1;
    fourth->next = head;
    
    linkedListTraversal(head);
    
    return 0;
}