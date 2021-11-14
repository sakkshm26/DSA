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

void Push(stack *ptr, int val)
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

int Pop(stack *ptr)
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

int main()
{
    stack *sp = new stack;
    sp->size = 10;
    sp->top = -1;
    sp->arr = new int[sp->size];
    cout<<"Stack has been created successfully"<<endl;

    cout<<"Before Pushing, Full : "<<isFull(sp)<<endl;
    cout<<"Before Pushing, Empty : "<<isEmpty(sp)<<endl;
    
    Push(sp,56);
    Push(sp,8);
    Push(sp,1);
    Push(sp,64);
    Push(sp,3);
    Push(sp,75);
    Push(sp,4);
    Push(sp,56);
    Push(sp,2);
    Push(sp,6);//--> Pushed 10 values
    // Push(sp,20); Stack overflow since the size of the stack is 10
    
    cout<<"After Pushing, Full : "<<isFull(sp)<<endl;
    cout<<"After Pushing, Empty : "<<isEmpty(sp)<<endl;
    
    cout<<"Popped "<<Pop(sp)<<" from the stack"<<endl;
    cout<<"Popped "<<Pop(sp)<<" from the stack"<<endl;// -->Last in first out 
    cout<<"Popped "<<Pop(sp)<<" from the stack"<<endl;

    return 0;
}
