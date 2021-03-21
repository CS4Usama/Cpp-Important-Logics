/*Problem:
		Write a program that inputs two float Values and Operator from the User and perform Arithmetic Operation by using
nested if-else statements according to the operator input.
Use the loop to repeat Calculations again and again, and system("CLS") Function to clear Previous Calculations.
When User press 'q key' after a Calculation, Program should be exit and if User press any other key then it will clear the screen for next Calculation.
(Calculator Program by using nested if-else statements)
-----------------------------------------------------------------------------------------------------------------------------------------------------------*/


#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
int main()
{
	system("color A");	//for Green colored output
	
	/*Here 'num1' and 'num2' Variable is used to store '1st and 2nd Value that User will enter',
	'ans' Variable is used to store 'these two Value's Answer',
	Variable 'op' is used to store Operator (+ - * /) Input from User and
	'input' variable is used to store input at the end of calculation that decides whether Program exit or continue.
	'long double' Data Type can store 'Large Real Numeric Values with decimal point, with the accuracy of 19 decimal places'.
	'long double' Data Type holds '16 Bytes' of Memory in RAM which we can find through sizeof() Operator.
	So, User can also get Answer of large point values*/
	
	long double num1, num2, ans;
	char op, input;
	
	//Here I have used "do while loop" for repeating Statements again and again
	
	do
		{
			cout<<"\t\t\t\t\t(CALCULATOR programmed by CyberHawk)"<<endl<<endl;
			
			//Input of Values and Operator from the User
			cout<<"Enter 1st Value:  ";
			cin>>num1;
			cout<<"Enter Operator from (+ - * /) to perform Arithmetic Operation:  ";
			cin>>op;
			cout<<"Enter 2nd Value:  ";
			cin>>num2;
		
			/* (Nested if-else Condition)
			nested if condition to display Answer of different Operators according to User input*/
			if(op=='+'||op=='-'||op=='*'||op=='/')
			{
				if(op=='+')
					ans=num1+num2;
				else if(op=='-')
					ans=num1-num2;
				else if(op=='*')
					ans=num1*num2;
				else
					ans=num1/num2;
				
				cout<<endl<<"Answer of ("<<num1<<" "<<op<<" "<<num2<<") is:  "<<ans<<endl;
			}
			
			//  \a Alarm Escape Character is used here, which produce error sound when user enter invalid operator
			//nested else condition to display 'Invalid Operator' if User enter operator rather than (+ - * /)
			else
				cout<<endl<<"\aYou have entered Invalid Operator. Please choose Correct Operator from (+ - * /)."<<endl;
			
			/*Here I used system("cls") function whcih is defined in 'stdlib.h' Header File that will clear the screen after one calculation
			but because of getch() function output will remain displayed until user did not press any key...
			After getting the output of one calculation, When user press any key,
			system("cls") function works and clear the screen for next calculation*/
			
			cout<<endl<<"Press Any Key to continue Program for another Calculation OR press 'q key' to exit...";
			input=getch();
			if(input=='q'||input=='Q')
			//User can Press q or Q if Caps Lock in on. So, I used both cases to exit
				break;
			else
				system("CLS");
			
			/* THE LOGIC i used here is that getch() function gets input from user and saves its value to input variable
			if user press q or Q, condition will be true and program exits. But if user press any other key then
			else condition works and clear the previous calculation's result*/
		}
	while(op!='\f');	
	return 0;
}
