#include<iostream>
#include<string>
using namespace std;

class Node
{
    public:
    string name;
    float marks;
    Node *nextNode;
};

int main()
{
    Node *head= new Node();
    Node *second= new Node();
    Node *three= new Node();
    Node *i=head;

    cout<<"First student name"<<endl;
    cin>>head->name;
    cout<<"First student marks"<<endl;
    cin>>head->marks;
    head->nextNode=second;
    cout<<"Second student name"<<endl;
    cin>>second->name;
    cout<<"second student marks"<<endl;
    cin>>second->marks;
    second->nextNode=three;
    cout<<"Third student name"<<endl;
    cin>>three->name;
    cout<<"Third student marks"<<endl;
    cin>>three->marks;
    three->nextNode=NULL;
    cout<<endl;

    while(i!=NULL)
    {
        cout<<i->name<<endl<<i->marks<<endl<<i->nextNode<<endl;

        i=i->nextNode;
    }
}