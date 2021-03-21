/*Problem:
		Write a program that inputs two float Values and Operator from the User and perform Arithmetic Operation by using
switch statement according to the operator input.
Use the loop to repeat Calculations again and again, and system("CLS") Function to clear Previous Calculations.
When User press 'q key' after a Calculation, Program should be exit and if User press any other key, then it will clear the screen for next Calculation.
(Calculator Program by using switch statement)
-----------------------------------------------------------------------------------------------------------------------------------------------------------*/


#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
int main()
{
	system("color A");	//for Green colored output
	
	long double num1, num2, ans;
	char op, input;
	for(;op!='\f';)
	{
		cout<<"\t\t\t\t\t(CALCULATOR programmed by CyberHawk)"<<endl<<endl;
		cout<<"Enter 1st Value:  ";
		cin>>num1;
		cout<<"Enter Operator from (+ - * /) to perform Arithmetic Operation:  ";
		cin>>op;
		cout<<"Enter 2nd Value:  ";
		cin>>num2;
		//switch statement to display Answer of different Operators according to User input:
		switch(op)
		{
			case'+':
				ans=num1+num2;
				cout<<endl<<"Answer of ("<<num1<<" "<<op<<" "<<num2<<") is:  "<<ans<<endl;
				break;
			case'-':
				ans=num1-num2;
				cout<<endl<<"Answer of ("<<num1<<" "<<op<<" "<<num2<<") is:  "<<ans<<endl;
				break;
			case'*':
				ans=num1*num2;
				cout<<endl<<"Answer of ("<<num1<<" "<<op<<" "<<num2<<") is:  "<<ans<<endl;
				break;
			case'/':
				ans=num1/num2;
				cout<<endl<<"Answer of ("<<num1<<" "<<op<<" "<<num2<<") is:  "<<ans<<endl;
				break;
			default:
				cout<<endl<<"\aYou have entered Invalid Operator. Please choose Correct Operator from (+ - * /)."<<endl;
		}
		cout<<endl<<"Press Any Key to continue Program for another Calculation OR press 'q key' to exit...";
		input=getch();
		//User can Press q or Q if Caps Lock in on. So, I used both cases to exit.
		if(input=='q'||input=='Q')
			break;
		else
			system("CLS");
	}	
	return 0;
}
