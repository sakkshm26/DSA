#include <bits/stdc++.h>
using namespace std;

class Queue
{
    public:
    int size;
    int f;
    int r;
    int *arr;
};

int isEmpty(Queue *q)
{
    if(q->r==q->f)
    {
        return 1;
    }
    return 0;
}

int isFull(Queue *q)
{
    if(q->r==q->size-1)
    {
        return 1;
    }
    return 0;
}

void enqueue(Queue *q, int val)
{
    if(isFull(q))
    {
        cout<<"The Queue is full"<<endl;
    }
    else
    {
        q->r++;
        q->arr[q->r] = val;
        cout<<"Enqued element is "<<val<<endl;
    }
}

int dequeue(Queue *q)
{
    int a=-1;
    if(isEmpty(q))
    {
        cout<<"The Queue is empty"<<endl;
    }
    else
    {
        q->f++;
        a = q->arr[q->f];
    }
    return a;
}

int main()
{
    Queue q;
    q.size = 100;
    q.r = q.f = -1;
    q.arr = new int[q.size];

    enqueue(&q,12);
    enqueue(&q,13);
    enqueue(&q,14);
    cout<<"Dequeuing element "<<dequeue(&q)<<endl;
    cout<<"Dequeuing element "<<dequeue(&q)<<endl;
  
    if(isEmpty(&q))
    {
        cout<<"The queue is empty"<<endl;
    }

    if(isFull(&q))
    {
        cout<<"The queue is full"<<endl;
    }
    
    return 0;
}