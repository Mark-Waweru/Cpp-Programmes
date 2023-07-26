#include<iostream>
using namespace std;

class Box
{
    protected:
    double width;
};

class jisaduku:Box
{
    public:
    setjisaduku_width(double wid)
    {
        width=wid;
    }
    getjisaduku_width()
    {
        return width;
    }
};

int main()
{
    jisaduku packet;
    packet.setjisaduku_width(15.0);
    cout<<"The width is "<<packet.getjisaduku_width()<<endl;
    return 0;
}
