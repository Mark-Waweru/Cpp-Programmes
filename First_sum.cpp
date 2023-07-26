#include <iostream>

using namespace std;

int main()

{
	int length, width, perimeter, area;
	cout<< "Enter the length of the rectangle= ";
	cin>>length;
	cout<< "Enter the width of the rectangle= ";
	cin>> width;
	perimeter= 2*(length+width);
	area= length*width;
	cout<< endl<< "Perimeter="<< perimeter <<endl<<"Area="<< area;
	
	return 0; 
}

