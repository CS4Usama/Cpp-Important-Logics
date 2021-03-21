/* Program to display Current Date & Time of victim's PC in the Format of:
	DAY MONTH DATE HH:MM:SS YEAR	*/


#include <iostream>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
using namespace std;
int main()
{
	system("color A");	//for Green colored output
	time_t pc=time(NULL);
	cout<<ctime(&pc);
	getch();
}
