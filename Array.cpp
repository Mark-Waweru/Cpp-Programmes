#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int mark[10];
//This is for initialising the 10 elements in the array mark.
    for(int i=0;i<10;i++)
    {
        mark[i]=i+100;

    }
    cout<<"Element"<<setw(13)<<"Value"<<endl;
//This is for displaying the array that we initially initialized
    for(int j=0;j<10;j++)
    {
        cout<<setw(7)<<j<<setw(13)<<mark[j]<<endl;
    }
    return 0;
}