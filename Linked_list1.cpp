#include<iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *nextNode;
};

int main()
{
    struct Node *head= new Node;
    struct Node *second= new Node;
    struct Node *third= new Node;
    struct Node *p=head;

    cout<<"Enter the data in node one"<<endl;
    cin>>head->data;
    head->nextNode=second;
    cout<<"Enter the data in node two"<<endl;
    cin>>second->data;
    second->nextNode=third;
    cout<<"Enter the data in node three"<<endl;
    cin>>third->data;
    cout<<endl;
    third->nextNode=NULL;

    while(p!=NULL)
    {
        cout<<p->data<<endl;
        cout<<p->nextNode<<endl;
        p= p->nextNode;
    }

}
