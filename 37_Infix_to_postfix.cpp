#include <bits/stdc++.h>
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

char Pop(Stack *ptr)
{
    if (isEmpty(ptr))
    {
        cout<<"Stack Underflow! Cannot pop from the stack"<<endl;
        
    }

    else
    {
        char val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

int StackTop(Stack *sp)
{
    return sp->arr[sp->top];
}

int precedence(char ch)
{
    if(ch=='*' || ch=='/')
    {
        return 3;
    }
    if(ch=='+' || ch=='-')
    {
        return 2;
    }
    else
    {
        return 0;
    }
}

int isoperator(char ch)
{
    if(ch=='+' || ch=='-' || ch=='/' || ch=='*')
    {
        return 1;
    }
    return 0;
}

char* infixToPostfix(char *infix)
{
    Stack *sp = new Stack();
    sp->size = 100;
    sp->top = -1;
    sp->arr = new char[sp->size];
    char *postfix = new char[strlen(infix)+1];
    int i=0,j=0;
    while(infix[i]!='\0')
    {
        if(!isoperator(infix[i]))
        {
            postfix[j]=infix[i];
            i++;
            j++;
        }
        else
        {
            if(precedence(infix[i]) > precedence(StackTop(sp)))
            {
                Push(sp,infix[i]);
                i++;
            }
            else
            {
                postfix[j]=Pop(sp);
                j++;
            }
        }
    }

    while(!isEmpty(sp))
        {
            postfix[j] = Pop(sp);
            j++;
        }
    postfix[j] = '\0';
    return postfix;
}

int main()
{
    char * infix = "x-y/z-k*d";
    cout<<"Postfix is "<<infixToPostfix(infix);
    return 0;
}