#include<iostream>
using namespace std;

class Shape
{
    protected:
   int width, height;

   public:
   Shape(int a=0, int b=0)
   {
    width=a;
    height=b;
   }

   virtual int area()
   {
    cout<<"Parent class area:"<<endl;
    return 0;
   }

};

class Rectangle:public Shape
{
    public:
   Rectangle(int a=0, int b=0):Shape(a,b){}

   int area()
   {
    int area;
    area=width*height;
    cout<<"Rectangle class Area: "<<area<<endl;
    return(area);

   }

};
class Triangle:public Shape
{
    public:
    Triangle(int a=0, int b=0):Shape(a,b){}

    int area()
    {
        int area;
        area=width*height/2;
        cout<<"Triangle class Area:"<<area<<endl;
        return(area);

    }

};

int main()
{
    Shape*shape;
    Rectangle rec(10,7);
    Triangle tri(10,5);
    //Store the Address of Rectangle
    shape=&rec;
    //Call rectangle area
    shape->area();
    //Store the Address of Triangle
    shape=&tri;
    //Call Triangle area
    shape->area();
    return 0;
}