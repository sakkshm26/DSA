#include <iostream>
using namespace std;

class Stack
{ 
    public:
    int size;
    int top;
    int *arr;
};

int isEmpty(Stack *ptr)
{
    if (ptr->top==-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(Stack *ptr)
{
    if (ptr->top==ptr->size-1)
    {
        return 1;
    }
    else 
    {
        return 0;
    }
}

int main()
{
    Stack *s;
    s = new Stack;
    s->size = 5;
    s->top = -1;
    s->arr = new int[s->size];

    //Pushing an element manually
    s->arr[0]=10;
    s->top++;
    s->arr[1]=11;
    s->top++;
    s->arr[2]=12;
    s->top++;
    s->arr[3]=13;
    s->top++;
    s->arr[4]=14;
    s->top++;
     
    //Check if stack is empty
    if(isEmpty(s))
    {
        cout<<"The Stack is empty"<<endl;
    }
    else
    {
        cout<<"The Stack is not empty"<<endl;
    }

    return 0;
}