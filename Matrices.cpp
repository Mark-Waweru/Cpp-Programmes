#include<iostream>
using namespace std;

int main()
{

    int a[3][3], b[3][2], ans[3][2];
    cout<<"input an array of matrix 3x3"<<endl;
    for(int i=0;i<3;i++)
    {
        cout<<"Row "<<i+1<<endl;
        for(int j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
        cout<<endl;
    }

    cout<<"Input an array of matrix 3x2"<<endl;
    for(int i=0;i<3;i++)
    {
        cout<<"Row "<<i+1<<endl;
        for(int j=0;j<2;j++)
        {
            cin>>b[i][j];
        }
        cout<<endl;
    }

    for(int i=0;i<=3;i++)
    {
        ans[i][0]=((a[i][0]*b[0][0])+(a[i][1]*b[1][0])+(a[i][2]*b[2][0]));
        ans[i][1]=((a[i][0]*b[0][1])+(a[i][1]*b[1][1])+(a[i][2]*b[2][1]));
    }

    cout<<"The Answer after multiplying the matrix 3x3 and 3x2 is"<<endl;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<ans[i][j]<<"  ";
        }
        cout<<endl;
    }
}
