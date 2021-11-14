#include <bits/stdc++.h>
using namespace std;

class circularQueue
{
    public:
    int size;
    int f;
    int r;
    int *arr;
};

int isEmpty(circularQueue *q)
{
    if(q->r==q->f)
    {
        return 1;
    }
    return 0;
}

int isFull(circularQueue *q)
{
    if((q->r+1)%q->size==q->f)
    {
        return 1;
    }
    return 0;
}

void enqueue(circularQueue *q, int val)
{
    if(isFull(q))
    {
        cout<<"The circularQueue is full"<<endl;
    }
    else
    {
        q->r = (q->r+1)%q->size;
        q->arr[q->r] = val;
        cout<<"Enqued element is "<<val<<endl;
    }
}

int dequeue(circularQueue *q)
{
    int a=-1;
    if(isEmpty(q))
    {
        cout<<"The circularQueue is empty"<<endl;
    }
    else
    {
        q->f = (q->f+1)%q->size;
        a = q->arr[q->f];
    }
    return a;
}

int main()
{
    circularQueue q;
    q.size = 4;
    q.r = q.f = 0;
    q.arr = new int[q.size];

    enqueue(&q,12);
    enqueue(&q,13);
    enqueue(&q,14);
    cout<<"Dequeuing element "<<dequeue(&q)<<endl;
    cout<<"Dequeuing element "<<dequeue(&q)<<endl;
    cout<<"Dequeuing element "<<dequeue(&q)<<endl;
    enqueue(&q,42);
    enqueue(&q,53);
    enqueue(&q,64);
  
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