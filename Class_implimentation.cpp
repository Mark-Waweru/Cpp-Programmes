#include<iostream>
#include"Class_header_files.h"
using namespace std;

    SalariedEmployee::setEmployeesInfo(char EnglishName, char SirName, int number)
    {
        EmployeeNo=number;
        FirstName=EnglishName;
        SecondName=SirName;
    }

    SalariedEmployee::getEmployeeInfo(int number, char EnglishName, char SirName)
    {
        cout<<"Enter your First Name"<<endl;
        cin>>EnglishName;
        cout<<"Enter your SecondName"<<endl;
        cin>>SirName;
        cout<<"Enter your Employee number"<<endl;
        cin>>number;
        cout<<EnglishName<<" "<<SirName<<endl;
        cout<<"Employee number: "<<number<<endl;
        cout<<"Your Monthly salary is ksh "<<MonthlySalary<<endl;
    }

    HourlyEmployee::set_EmployeeInfo(char EnglishName, char SirName, int number, float timeWorked)
    {
        EmployeeNo=number;
        FirstName=EnglishName;
        SecondName=SirName;
        Hours=timeWorked;
    }

    HourlyEmployee::get_EmployeeInfo(float wage, float timeWorked, int number, char EnglishName, char SirName)
    {
        cout<<"Enter your First Name"<<endl;
        cin>>EnglishName;
        cout<<"Enter your SecondName"<<endl;
        cin>>SirName;
        cout<<"Enter your Employee number"<<endl;
        cin>>number;
        cout<<"Enter the hours you have worked"<<endl;
        cin>>timeWorked;
        wage=timeWorked*HourlyWage;
        cout<<EnglishName<<" "<<SirName<<endl;
        cout<<"Employee number: "<<number<<endl;
        cout<<"Your Hourly Wage is Ksh "<<wage<<endl;
    }
