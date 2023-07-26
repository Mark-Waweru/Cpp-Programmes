#include<iostream>
using namespace std;

class Box
{
    private:
    double width;
    public:
    double length;
    set_width(double wid)
    {
        width=wid;
    }
    get_width()
    {
        return width;
    }
};

int main()
{
    Box saduku;
    saduku.length=10.0;
    cout<<"The length: "<<saduku.length<<endl;
    saduku.set_width(10.0);
    cout<<"The Width: "<<saduku.get_width()<<endl;
    return 0;
}

//This code wouldn't run because the declared width in the main function cannot be executed because the width was declared private
//in the class Box
/*#include<iostream>
using namespace std;

class Box
{
    private:
    double width;
    public:
    double length;
    set_width(double wid)
    {
        width=wid;
    }
    get_width()
    {
        return width;
    }
};

int main()
{
    Box saduku;
    saduku.length=10.0;
    cout<<"The length: "<<saduku.length<<endl;
    saduku.width=10.0;
    cout<<"The Width: "<<saduku.get_width()<<endl;
    return 0;
}*/
