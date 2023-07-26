#include<iostream>
#include<stack>
using namespace std;

/*printStack(stack<string> list)
{
  while(list.size()!=0)
  {
    cout<<list.top()<<endl;
    list.pop();
  }
}*/


int main()
{
  stack<string>firstStack;

  firstStack.push("Mark");
  firstStack.push("Jane");
  firstStack.push("Alice");
  firstStack.push("Josphat");
  firstStack.pop();

  if (firstStack.empty())
  cout<<"The Stack is empty"<<endl;
  else
  cout<<"Stack is not empty"<<endl<<"The Stack size is:" <<firstStack.size()<<endl;

  while(firstStack.size()!=0)
  {
    cout<<"The top element is: "<<firstStack.top()<<endl;
    firstStack.pop();
  }
  
  return 0;
}