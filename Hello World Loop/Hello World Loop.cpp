/*Problem:
Write a program that displays "Hello World!". Every time User input 'a', program display "Hello World!" but when User input 'q' program exit.
If the user inputs any other Character instead of 'a' and 'q', it will display "Unknown Command".
-------------------------------------------------------------------------------------------------------------------------------------------------*/


#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

//Small Module or Function in which Output of "Hello World!" is defined.
void output()
{
	cout<<"Hello World!"<<endl<<endl;
}

//Main Function with While Loop (inside if else statements).
int main()
{
	system("color A");	//for Green colored output
	cout<<"Enter 'a' to display Output. Every time you type 'a', it will display Output."<<endl;
	cout<<"For example: if you type 'a' thrice, it will display Output three times and so on...";
	cout<<endl<<"Enter 'q' to exit from Program."<<endl<<endl;
	//Variable Declaration
	char input;
	//While Loop with if else statements
	while(1)
	{
		cin>>input;
		if(input=='a' || input=='A')
		output();
		else if(input=='q' || input=='Q')
		break;
		else if(input!='\n')
		cout<<"Unknown Command.\nPlease enter 'a' to display Output or 'q' to exit from Program."<<endl<<endl;
	}
	return 0;
}
