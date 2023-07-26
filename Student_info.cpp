#include<iostream>
#include<string>
using namespace std;

class Student
{
 private:
    string studentName;
    string studentNumber;
    string phoneNumber;

 private:
   set_modification(string name,string number, string phone)
   {
    name=studentName;
    number=studentNumber;
    phone=phoneNumber;
   }
   public:
   get_access(string name,string number, string phone)
   {
    cout<<"Key in yur name: ";
    cin>>name;
    cout<<"Key in Your ADM NO: ";
    cin>>number;
    cout<<"Key in your phone NO: ";
    cin>>phone;
    //Display the data entered
    cout<<name<<endl;
    cout<<number<<endl;
    cout<<phone<<endl;
   }
};

int main()
{
    Student data;
    string name, number, phone;
    cout<<data.get_access(name, number, phone)<<endl;
    return 0;
}