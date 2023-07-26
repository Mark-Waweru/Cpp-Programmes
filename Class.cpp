#include<iostream>
using namespace std;

class Line
{
    public:
    double length;
    set_length(double len)
    {
        length=len;
    }
    double get_length()
    {
        return length;
    }
};
/*Main function of the program*/
 int main()
 {
    double len;
    Line line;//Creating an object called line
    line.set_length(6.0);
    cout<<"Length of line: "<<line.get_length()<<endl;
    line.length=10.0;
    cout<<"Length of line: "<<line.length<<endl;
    return 0;
 }


 //This type of method is too long and complicated but it uses the scope resolution operator (::)
 /* #include<iostream>
using namespace std;

class Line
{
    public:
    double length;
    set_length(double len);
    double get_length();
};
//Member function definition 
double Line::get_length()
{
    return length;
}

 Line::set_length(double len)
{
    length=len;
}
/*Main function of the program*/
 /*int main()
 {
    Line line;//Creating an object called line
    line.set_length(6.0);
    cout<<"Length of line: "<<line.get_length()<<endl;
    line.length=10.0;
    cout<<"Length of line: "<<line.length<<endl;
    return 0;
 }*/