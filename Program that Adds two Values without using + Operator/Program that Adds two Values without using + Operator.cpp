//Write a program that adds two values without using + operator.

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	long double a, b;
	cout<<"Enter 1st Value: ";
	cin>>a;
	cout<<"Enter 2nd Value: ";
	cin>>b;
	cout.setf(ios::fixed);
	//First Method to display Output:
	cout<<"\nSum of Above Both Values: "<<-(-a-b);
	
    /* Another Method:
	long double sum = -(-a-b);
	cout<<"\nSum of Above Both Values: "<<sum; */
	
	return 0;
}
