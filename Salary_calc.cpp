#include<iostream>
#include<string>
using namespace std;

class Employee
{
    protected:
    int EmployeeNo;
    string FirstName;
    string SecondName;
};

class SalariedEmployee: public Employee
{
    private:
    float MonthlySalary=120000;

    public:    
    setEmployeesInfo(string EnglishName, string SirName, int number);
    getEmployeeInfo(int number, string EnglishName, string SirName);
};

class HourlyEmployee: public Employee
{
    private:
    const float HourlyWage=5000;
    float Hours;

    public:
    set_EmployeeInfo(string EnglishName, string SirName, int number, float timeWorked);
    get_EmployeeInfo(float wage, float timeWorked, int number, string EnglishName, string SirName);
};

    SalariedEmployee::setEmployeesInfo(string EnglishName, string SirName, int number)
    {
        EmployeeNo=number;
        FirstName=EnglishName;
        SecondName=SirName;
    }

    SalariedEmployee::getEmployeeInfo(int number, string EnglishName, string SirName)
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

    HourlyEmployee::set_EmployeeInfo(string EnglishName, string SirName, int number, float timeWorked)
    {
        EmployeeNo=number;
        FirstName=EnglishName;
        SecondName=SirName;
        Hours=timeWorked;
    }

    HourlyEmployee::get_EmployeeInfo(float wage, float timeWorked, int number, string EnglishName, string SirName)
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

    int main()
{
    SalariedEmployee permanent;
    HourlyEmployee temporary;  
    int choice, number;
    string EnglishName, SirName;
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
    }while((choice<1) || (choice>2));
    return 0;
}