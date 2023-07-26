#include<iostream>
using namespace std;

class Box
{
    double width;

    public:
    set_width(double wid)
    {
        width=wid;

    }
    //This is a friend function
    friend printWidth(Box box);
};
//Note: printWidth is not a member of any class but is a friend of class Box
 printWidth(Box box)
{
    cout<<"Width of the Box is: "<<box.width<<endl;
}

int main()
{
    Box box;

    //set box width without member function
    box.set_width(120.909);

    //Use friend function to print the width
    printWidth(box);
    return 0;
}