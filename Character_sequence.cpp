#include<iostream>
using namespace std;

int main()
{
    char question[]={"Enter your first name"};
    char greeting[]={"Hello,"};
    char name[20];
    cout<<question<<endl;
    cin>>name;
    cout<<greeting<<name<<endl;
    return 0;
}