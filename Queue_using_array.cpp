#include<iostream>
using namespace std;

int firstQueue[5];
int myBack=-1;
int myFront=0;

bool isEmpty()
{
    if(myBack==-1)
    return true;
    else
    return false;
}

int Enqueue(int value)
{
    if(myBack==4)
    cout<<"The Queue is full"<<endl;
    else
    myBack++;
    firstQueue[myBack]=value;
}

Dequeue()
{
    if(isEmpty())
    cout<<"The Queue is Empty"<<endl;
    else
    firstQueue[myFront]=0;
    myFront++;
}

queueFront()
{
    if(isEmpty())
    cout<<"The Queue is Empty"<<endl;
    else
    cout<<"The value at the front of the queue is "<<firstQueue[myFront]<<endl;
}

queueRare()
{
    if(isEmpty())
    cout<<"The Queue is Empty"<<endl;
    else
    cout<<"The value at the back or rear of the Queue is "<<firstQueue[myBack]<<endl;
}

display_values()
{
    if(isEmpty())
    {
        cout<<"The Queue is Empty"<<endl;
    }
        else
    {
        cout<<"The values in the Queue are as follows:"<<endl;
        for(int i=0;i<=myBack;i++)
        {
            cout<<firstQueue[i]<<endl;
        }
    }
}

int main()
{
    Enqueue(12);
    Enqueue(10);
    Enqueue(200);
    Enqueue(120);
    Enqueue(400);
    Dequeue();
    Dequeue();
    queueFront();
    queueRare();
    display_values();
}