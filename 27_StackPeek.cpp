#include <iostream>
using namespace std;

class stack
{
    public:
    int size;
    int top;
    int *arr;
};

int isEmpty(stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(stack *ptr)
{
    if(ptr->top == ptr->size-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(stack *ptr, int val)
{
    if (isFull(ptr))
    {
        cout<<"Stack Overflow! Cannot push "<<val<<" to the stack"<<endl;
    }

    else
    {
        ptr->top++;
        ptr->arr[ptr->top]=val;  
    }
}

int pop(stack *ptr)
{
    if (isEmpty(ptr))
    {
        cout<<"Stack Underflow! Cannot pop from the stack"<<endl;
        return -1;
    }

    else
    {
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

int peek(stack *sp, int i)
{
    int arrayInd = (sp->top)-i+1;
    if (arrayInd<0)
    {
        cout<<"Not a valid position for the stack"<<endl;
        return -1;
    }
    else 
    {
        return sp->arr[arrayInd];
    }
}

int main()
{
    stack *sp = new stack;
    sp->size = 10;
    sp->top = -1;
    sp->arr = new int[sp->size];
    cout<<"Stack has been created successfully"<<endl;
    
    push(sp,56);
    push(sp,8);
    push(sp,1);
    push(sp,64);
    push(sp,3);
    push(sp,75);
    push(sp,4);
    push(sp,82);
    push(sp,2);
    push(sp,6);

    // Printing values from the stack
    for (int j = 1; j <= sp->top+1; j++)
    {
        cout<<"The value at psoition "<<j<<" is "<<peek(sp,j)<<endl;
    }
    

    return 0;
}