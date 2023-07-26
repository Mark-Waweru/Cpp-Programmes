#include<iostream>
using namespace std;

class Shape
{
    public:
    set_width(int wid)
    {
        width=wid;
    }
    set_height(int hi)
    {
        height=hi;
    }

    protected:
    int width;
    int height;
};

class Rectangle: public Shape
{
    public:
    get_area()
    {
        return(width*height);
    }
};

int main()
{
    Rectangle blue;
    blue.set_height(20);
    blue.set_width(80);
    cout<<"The area of height 20 and width 80 is "<<blue.get_area();
    return 0;
}