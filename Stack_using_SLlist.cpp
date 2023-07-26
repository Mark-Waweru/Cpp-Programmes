#include<iostream>
using namespace std;

struct stackNode
{
    int data;
    stackNode *nextNode;
};

stackNode *top=NULL;

bool isEmpty()
{
    if(top==NULL)
    return true;
    else
    return false;
}

int push(int value)
{
    stackNode *pushNode = new stackNode;
    pushNode->data=value;
    pushNode->nextNode=top;
    top=pushNode;
}

pop()
{
    stackNode *removePointer=top;
    if(isEmpty())
    cout<<"The Stack is Empty"<<endl;
    else
    top=top->nextNode;
    delete(removePointer);
}

read_top()
{
    if(isEmpty())
    cout<<"Stack is Empty"<<endl;
    else
    cout<<"The top value in the Stack is "<<top->data<<endl;
}

display_stack()
{
    if(isEmpty())
    cout<<"Stack is Empty"<<endl;
    else
    cout<<"The stack values are as follows"<<endl;
    while(top!=NULL)
    {   
        cout<<top->data<<endl;
        top=top->nextNode;
    }
}

int main()
{
    push(34);
    push(20);
    push(10);
    push(120);
    pop();
    read_top();
    display_stack();
}