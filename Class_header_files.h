class Employee
{
    protected:
    int EmployeeNo;
    char FirstName;
    char SecondName;
};

class SalariedEmployee: public Employee
{
    private:
    float MonthlySalary=120000;

    public:    
    setEmployeesInfo(char EnglishName, char SirName, int number);
    getEmployeeInfo(int number, char EnglishName, char SirName);
};

class HourlyEmployee: public Employee
{
    private:
    const float HourlyWage=5000;
    float Hours;

    public:
    set_EmployeeInfo(char EnglishName, char SirName, int number, float timeWorked);
    get_EmployeeInfo(float wage, float timeWorked, int number, char EnglishName, char SirName);
};