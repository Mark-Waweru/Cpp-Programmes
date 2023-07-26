#include<iostream>
using namespace std;

class Pyramids
{
   public:
   int rows;

   public:
   normal()
   {
    cout<<"Enter the number of rows to print"<<endl;
    cin>>rows;
    for(int i=1;i<=rows;i++)
    {
       for(int j=0;j<=rows;j++)
        {
          cout<<"*";
        }
    cout<<endl;
    }
   }

   Right_angle_triangle()
   {
    cout<<"Enter the number of rows to print"<<endl;
    cin>>rows;
    for(int i=1;i<=rows;i++)
    {
      for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
    cout<<endl;
    }
   }

   Inverted_Right_angle_triangle()
   {
    cout<<"Enter the number of rows to print"<<endl;
    cin>>rows;
    for(int i=1;i<=rows;i++)
    {
      for(int j=1;j<=(rows+1)-i;j++)
        {
            cout<<"*";
        }
    cout<<endl;
    }
   }


    pyramid()
   {
    cout<<"Enter the number of rows to print"<<endl;
    cin>>rows;
    for(int i=1;i<=rows;i++)
    {
      for(int space=1;space<=rows-i;space++)
        {
            cout<<" ";
        }
          for(int j=1;j<=(i*2)-1;j++)
            {
             cout<<"*";
            }
    cout<<endl;
    }
   }
   
};

int main()
{
    Pyramids user;
    int choice;
    int Enter;
    char name[20];
    cout<<"Please type your name"<<endl;
    cin>>name;
    cout<<"Hello "<<name<<" Welcome to Pyramids program"<<endl;
    cout<<"To continue press '0',to exit press 1"<<endl;
    cin>>Enter;
    if(Enter==0)
    {
    do
     {
     cout<<"Choose The pyramid structure you want to print"<<endl;
     cout<<"1.Normal"<<endl<<"2.Right angle Triangle"<<endl<<"3.Inverted Right angle Triangle"<<endl<<"4.Pyramid"<<endl<<"5.Inverted Pyramid"<<endl;
     cin>>choice;
     if(choice==1)
     cout<<user.normal()<<endl;
     else if(choice==2)
     cout<<user.Right_angle_triangle()<<endl;
     else if(choice==3)
     cout<<user.Inverted_Right_angle_triangle()<<endl;
     else if(choice==4)
     cout<<user.pyramid()<<endl;
     else
     cout<<"Please choose the number's indicated before the pyramid structures"<<endl;
     } while((choice<=0)||(choice>=5));
    }
    else
    {
     cout<<"Next time"<<endl;
    }
   return 0;

}