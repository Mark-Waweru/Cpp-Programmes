#include <iostream>
#include<string>

using namespace std;
class student
{
private:
//Name all the data's as String because there are no operations performed on them
    string  student_name;
    string  student_number;
    string  phone_number;
    //This is the Set info Function method
    private:
    Set_info(string name, string number, string phone)
    {
       name=student_name;
       number=student_number;
       number=phone_number;
    }
    //This is get_student_info Function
    //This Function must be public so as to be able to call it in the main function
    public:
    get_student_info(string name, string number, string phone)
    {
    name="Kabingu";
    number="SC211/7000/2050";
    phone="0112345678";
    cout<<name<<endl;
    cout<<number<<endl;
    cout<<phone<<endl;
    }
};

int main()
{
    //The Object is claire
    student Claire;
    //You must first declare the variables that you  will use in this main function
    string name, number, phone;
    //This is how you call a function in the class
    cout<<Claire.get_student_info(name, number, phone)<<endl;
    return 0;
}
