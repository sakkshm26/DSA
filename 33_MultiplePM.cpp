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

int match(char a,char b)
{
    if(a=='{' && b=='}')
    {
        return 1;
    }
    if(a=='[' && b==']')
    {
        return 1;
    }
    if(a=='(' && b==')')
    {
        return 1;
    }
    return 0;
}

int parenthesisMatch(char *exp)
{
    Stack *sp;
    sp->top = -1;
    sp->size = 100;
    sp->arr = new char[sp->size];
    char popped_ch;

    for(int i=0;exp[i]!='\0';i++)
    {
        if(exp[i]=='(' || exp[i]=='{' || exp[i] == '[')
        {
            Push(sp,exp[i]);
        }
        else if(exp[i]==')'|| exp[i]=='}' || exp[i] == ']')
        {
            if(isEmpty(sp))
            {
                return 0;
            }
            popped_ch = Pop(sp);
            if(!match(popped_ch,exp[i]))
            {
                return 0;
            }
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
    char * exp = "[4-6]((8){(9-8)})";
    if(parenthesisMatch(exp))
    {
        cout<<"The parenthesis is balanced"<<endl;
    }
    else
    {
        cout<<"The parenthesis is not balanced"<<endl;
    }

    return 0;
}