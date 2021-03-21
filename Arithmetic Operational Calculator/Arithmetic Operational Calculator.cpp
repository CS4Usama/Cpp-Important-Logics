/*Problem:
Write a program that performs all Arithmetic Operations on two variables.
------------------------------------------------------------------------------*/


#include <iostream>
#include <conio.h>
#include <stdlib.h>	//for system() function
using namespace std;
int main()
{
	system("color A");	//for Green colored output
	cout<<"	  This Program will perform all Arithmetic Operations on two values (that you will enter):"<<endl<<endl;
	long int a,b;
	cout<<"Enter value of a: ";
	cin>>a;
	cout<<"Enter value of b: ";
	cin>>b;
	cout<<endl <<"Sum: "<<a+b<<endl;
	cout<<"Subtraction: "<<a-b<<endl;
	cout<<"Multiplication: "<<a*b<<endl;
	cout<<"Division: "<<a/b<<endl;
	cout<<"Modulus: "<<a%b;
	getch();
	return 0;
}
