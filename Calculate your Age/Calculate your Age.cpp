//Write a program that inputs Date of Birth and Current Date from the user and then calculate his age.


#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
int main()
{
	system("color A");	//for Green colored output
	
	int bd, bm, by, cd, cm, cy;
	cout<<"Enter Your Date of Birth in the format of DD MM YYYY:  ";
	cin>>bd>>bm>>by;
	cout<<"Enter Current Date in the format of DD MM YYYY:  ";
	cin>>cd>>cm>>cy;
	cout<<endl<<"Your Age is:"<<endl<<"\t";
	if(cd<bd)
	{
		cd=cd+30;
		cm=cm-1;
		cout<<cd-bd<<" Days  ";
	}
	else
		cout<<cd-bd<<" Days  ";
		
	if(cm<bm)
	{
		cm=cm+12;
		cy=cy-1;
		cout<<cm-bm<<" Months  ";
	}
	else
		cout<<cm-bm<<" Months  ";
	
	cout<<cy-by<<" Years.";
	getch();
	return 0;
}
