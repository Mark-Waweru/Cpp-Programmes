#include<iostream>
using namespace std;

int main()
{
    //Two dimensional array called mark with 3rows and 2 columns.
    int mark[6][2]={{0,0},{1,2},{2,4},{3,6},{4,8}};
    mark[2][1]={9};//This is changing the value in the array index [2][1]
    mark[5][0]={8};//This is inserting a new value un the array
    mark[5][1]={2};//Same to this
    //This is for displaying the array mark.
    for(int i=0;i<6;i++)
    for(int j=0;j<2;j++)
    {
        cout<<"mark["<<i<<"]["<<j<<"]:";
        cout<<mark[i][j]<<endl;
    }
return 0;
}