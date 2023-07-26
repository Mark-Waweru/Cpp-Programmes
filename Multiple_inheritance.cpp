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

class Paint_cost
{
    public:
    get_cost(int area)
    {
        return(area*70);
    }
};

class Rectangle: public Shape, public Paint_cost
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
    int area;
    blue.set_height(5);
    blue.set_width(7);
    area=blue.get_area();
    cout<<"The area of height 5 and width 7 is "<<blue.get_area()<<endl;
    cout<<"The cost of painting the room blue is Ksh "<<blue.get_cost(area);
    return 0;
}