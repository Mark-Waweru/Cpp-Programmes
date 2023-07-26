#include<iostream>

using namespace std;

int main()
{
    const float limit=40.0, overtime_factor=1.5;
    float hours_worked, hourly_rate, wage;
    cout<<"Enter the hours worked =";
    cin>>hours_worked;
    cout<<"Enter the hourly rate =";
    cin>>hourly_rate;
    if (hours_worked<=limit)
       wage=hourly_rate*hours_worked;
    else
        wage=(limit+(hours_worked-limit)*1.5)*hourly_rate;
        
    cout<<"Wage for "<<hours_worked<<"hours worked at an hourly rate of "<<hourly_rate<<"% is "<<wage;

    return 0;
}