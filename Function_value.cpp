#include<iostream>
using namespace std;

/*int increment(int x);//Function Declaration*/

int increment(int x)
{
    x=x+100;
    return x;
}

int main()
{
   int num1=100;
   num1=increment(num1);//Calling a function by value(passing the actual arguments to the formal parameters)
   cout<<num1<<endl;
   return 0;
}

/*int increment(int x)//Function Definition
{
    x=x+100;
    return x;
}*/