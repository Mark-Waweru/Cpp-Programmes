#include<iostream>
using namespace std;

int main()
{
    int firstValue=5, secondValue=15;
    int *p1, *p2;
    p1=&firstValue;
    p2=&secondValue;
    cout<<"first value memory address is "<<&firstValue<<endl;
    cout<<"Second value memory address is "<<&secondValue<<endl;
    *p1 = 10;   // value pointed by p1 = 10
    *p2=*p1;   // value pointed by p2 = value pointed by p1
    p1=p2; // p1 = p2 (value of pointer is copied)
    *p1 = 20;    // value pointed by p1 = 20
    cout<<"First value is "<<firstValue<<endl;
    cout<<"Second value is "<<secondValue<<endl;
    
    return 0;
}