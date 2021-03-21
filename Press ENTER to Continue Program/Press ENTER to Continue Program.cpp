/*Problem:
Write a program that displays Output only when user press ENTER Key.
Program: (Press ENTER to Continue)
------------------------------------------------------------------------*/


#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
int main()
{
	int a;
	while(a!=13)
	{
		system("CLS");  //this function is defined in stdlib.h Header File
		cout<<"Press ENTER to display output...";
		a=getch();
	}
	/*Here Output will only display when user press ENTER Key,
	if user press any other key except ENTER then output will not display*/
	
	cout<<endl<<endl<<"\t(The Hacker: A Power of Freedom)"<<endl;
	getch();
	return 0;
}
