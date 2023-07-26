#include<iostream>
using namespace std;

class Animal
{
    public:
    int legs=4;
};

class Dog:public Animal
{
    public:
    int tail=1;
};

int main()
{
    Dog scopy;
    cout<<"The dog scopy has "<<scopy.legs<<" legs and "<<scopy.tail<<" tail.";
    return 0;
}