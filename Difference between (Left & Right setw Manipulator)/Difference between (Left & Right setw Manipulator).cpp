/*Problem:
Write a program that explains the difference between (right setw) and (left setw) Manipulators.
--------------------------------------------------------------------------------------------------*/


#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;
int main()
{
	cout<<"By default Output shown by a Program:\nUSAMA"<<endl;
	cout<<"By default Output shown by (setw) Manipulator:"<<endl;
	cout<<"("<<setw(15)<<"USAMA"<<")"<<endl;
	cout<<"By default Output shown by (right setw) Manipulator:"<<endl;
	cout<<"("<<right<<setw(15)<<"USAMA"<<")"<<endl;
	cout<<"By default Output shown by (left setw) Manipulator:"<<endl;
	cout<<"("<<left<<setw(15)<<"USAMA"<<")";
	getch();
	return 0;
}
