#include <iostream>
#include<iomanip>

using namespace std;

class VolumeOfBox
{
private:
    int boxes[10][4];
    public:
    double getDimensions() //Create this method to store the dimensions of the boxes in the arrays
    {
       for(int i=0;i<10;i++)
        {
            cout<<"Input the dimension of Box "<<i+1<<endl;
            cout<<"length: "<<endl;
            cin>>boxes[i][0];
            cout<<"width: "<<endl;
            cin>>boxes[i][1];
            cout<<"height: "<<endl;
            cin>>boxes[i][2];
        }
    }
    double volume ();

};

double VolumeOfBox::volume ()
{
   cout<<"Length"<<setw(10)<<"Width"<<setw(10)<<"Height"<<setw(10)<<"Volume"<<endl;
    for(int i=0;i<10;i++)
    {
        boxes[i][3]=boxes[i][0]*boxes[i][1]*boxes[i][2];
        cout<<setw(6)<<boxes[i][0]<<setw(11)<<boxes[i][1]<<setw(10)<<boxes[i][2]<<setw(11)<<boxes[i][3]<<endl;
    }
}

int main ()
{ //Use an array myBox to store data for 10 boxes, incorporating loops

    VolumeOfBox myBox;
    
    cout<<myBox.getDimensions();
    cout<<myBox.volume();

    return 0;
}