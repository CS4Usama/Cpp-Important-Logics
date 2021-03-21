#include <iostream>
#include <conio.h>
#include <ctime>
#include <stdlib.h>
using namespace std;
int main()
{
	system("color A");	//for Green colored output
	time_t pc = time(NULL);
	struct tm *date = localtime(&pc);
	int x = date->tm_mday;
	int y = 1+ date->tm_mon;
	int z = 1900+ date->tm_year;
	cout<<x<<"\t"<<y<<"\t"<<z;
	if((x==1 && y==4) >= (x==30 && y==9))
		cout<<endl<<"\n    Cyber Hawk"<<endl;
	getch();
	return 0;
}
