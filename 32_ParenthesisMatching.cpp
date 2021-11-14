#include <iostream>
using namespace std;

class Stack
{ 
    public:
    int size;
    int top;
    char *arr;
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

void Push(Stack *ptr, char val)
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

void Pop(Stack *ptr)
{
    if (isEmpty(ptr))
    {
        cout<<"Stack Underflow! Cannot pop from the stack"<<endl;
        
    }

    else
    {
        int val = ptr->arr[ptr->top];
        ptr->top--;
        
    }
}

int parenthesisMatch(char *exp)
{
    Stack *sp;
    sp->top = -1;
    sp->size = 100;
    sp->arr = new char[sp->size];

    for(int i=0;exp[i]!='\0';i++)
    {
        if(exp[i]=='(')
        {
            Push(sp,'(');
        }
        else if(exp[i]==')')
        {
            if(isEmpty(sp))
            {
                return 0;
            }
            Pop(sp);
        }
    }

    if(isEmpty(sp))
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
    char *exp = "((8)(*--$$9))";
    if(parenthesisMatch(exp))
    {
        cout<<"The parenthesis is matching"<<endl;
    }
    else
    {
        cout<<"The parenthesis is not matching"<<endl;
    }

    return 0;
}