#include<iostream>
using namespace std;

int arrayStack[20];
int top=-1;

bool isEmpty()
{
    if(top==-1)
    return true;
    else
    return false;
}

int push(int value)
{
    if(top==19)
    cout<<"The stack is full"<<endl;
    else
    top++;
    arrayStack[top]=value;
}

pop()
{
    if(isEmpty())
    cout<<"The Stack is Empty"<<endl;
    else
    top--;
}

Top()
{
    if(isEmpty())
    cout<<"Stack is empty"<<endl;
    else
    cout<<"The top value in the stack is "<<arrayStack[top]<<endl;
}

displayValues()
{
    if(isEmpty())
    cout<<"The Stack is empty"<<endl;
    else
    cout<<"The stack values are as follows"<<endl;
    for(int i=top;i>=0;i--)
    {
        cout<<arrayStack[i]<<endl;
    }
}


stackSize()
{
    if(isEmpty())
    cout<<"Stack is empty"<<endl;
    else
    cout<<"The size of the stack is "<<top+1<<endl;
}


int main()
{
    push(34);
    push(100);
    push(29);
    push(30);
    push(120);
    pop();
    stackSize();
    Top();
    displayValues();
}   