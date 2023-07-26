#include<iostream>
#include"Class_header_files.h"
using namespace std;

int main()
{
    SalariedEmployee permanent;
    HourlyEmployee temporary;  
    int choice, number;
    char EnglishName, SirName;
    float wage, timeWorked;
    do
    {
    cout<<"Hii, are you:"<<endl;
    cout<<"1.Salaried Employee"<<endl<<"2.Hourly Employee"<<endl;
    cin>>choice;
    if (choice==1)
    {
        cout<<permanent.getEmployeeInfo(number, EnglishName, SirName)<<endl;
    }
    else if (choice==2)
    {
        cout<<temporary.get_EmployeeInfo(wage, timeWorked, number, EnglishName, SirName)<<endl;
    }
    else
    {cout<<"Please choose from the first and second option only"<<endl;}
    }while(choice<1 || choice>2);
    return 0;
}