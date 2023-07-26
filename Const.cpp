#include<iostream>

using namespace std;

int main()
{ 
    float radius, circumference;
	const float pi= 3.14159;
	const char tabulator= '\t';
	cout<<"Enter the radius of the circle: ";
	cin>>radius;
	circumference= 2*pi*radius;
	cout<<endl<<"Circumference ="<<circumference<<tabulator<<endl;
	return 0;
		
}