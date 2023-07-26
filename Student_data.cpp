#include<iostream>
#include<string>
using namespace std;

class Student
{
    private:
    string studentName;
    string studentNumber;
    string phoneNumber;
    float results;

    public:
    get_info()
    {   
        cout<<"Type your Name"<<endl;
        cin>>studentName;
        cout<<"Enter your Admission number"<<endl;
        cin>>studentNumber;
        cout<<"Key in your phone Number"<<endl;
        cin>>phoneNumber;    
        cout<<"Enter your Marks"<<endl;
        cin>>results;
        cout<<"Name:"<<studentName<<endl;
        cout<<"ADM No:"<<studentNumber<<endl;
        cout<<"Phone No:"<<phoneNumber<<endl;
        if(results <=49.99)   
        cout<<"Your grade is E "<<results;
        else if((results >=50.00) && (results<=59.99))
        cout<<"Your grade is D "<<results<<endl;
        else if ((results>=60.00) && (results<=69.99))
        cout<<"Your grade is C "<<results<<endl;
        else if ((results>=70.00) && (results<=79.99))
        cout<<"Your grade is B "<<results<<endl;
        else if ((results>=80.00) &&(results<=100.00))
        cout<<"Your grade is A "<<results<<endl;
        else
        cout<<"Please enter a valid marks from 0-100";
    }
    
};

int main()
{
    float results;
    Student Student_data;
    cout<<Student_data.get_info()<<endl;
    return 0;
}

/*#include<iostream>
#include<string>
using namespace std;

class Student
{

    string studentName;
    int studentNumber;
    string phoneNumber;
    float results;

    public:
    set_results(float marks)
    {
        results=marks;
    }
    get_marks(float results)
    {   
        if (results <=49.99)
        cout<<"Your grade is E ";
        else if((results >=50.00) && (results<=59.99))
        cout<<"Your grade is D ";
        else if ((results>=60.00) && (results<=69.99))
        cout<<"Your grade is C ";
        else if ((results>=70.00) && (results<=79.99))
        cout<<"Your grade is B ";
        else if ((results>=80.00) &&(results<=100.00))
        cout<<"Your grade is A ";
        else
        cout<<"Please enter a valid marks from 0-100 Wrong";
        return results;
    }
    get_info()
    {
        
    }
};

int main()
{
    float results;
    Student Student_data;
    cout<<"Type your Name"<<endl;
    cin>>Student_data.studentName;
    cout<<"Enter your Student number"<<endl;
    cin>>Student_data.studentNumber;
    cout<<"Key in your phone Number"<<endl;
    cin>>Student_data.phoneNumber;
    cout<<"Enter your Marks"<<endl;
    cin>>results;
    cout<<"Name:"<<Student_data.studentName<<endl;
    cout<<"ADM No:"<<Student_data.studentNumber<<endl;
    cout<<"Phone No:"<<Student_data.phoneNumber<<endl;
    cout<<Student_data.get_marks(results);
    return 0;
}
*/