//Problem:	Write a program that takes the input of a minimum 1 digit number & maximum 3 digits number from the user and convert it into English Counting.


#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;
int main()
{
	system("color A");	//for Green colored output
	
	int num, num1, num2, num3, num4, num5, num6;
	cout<<"\t\tThis Program will Convert Your Entered Number into English Counting."<<endl;
	cout<<"\t\t\tBut Range of Digits should be less than 4"<<endl<<endl;
	cout<<"Enter Any Number:  ";
	cin>>num;
	if(num>=0 && num<1000)
	{
		cout<<endl<<"The Number ("<<num<<") in English is:"<<endl<<"\t";
		if(num>=0 && num<=20)
		{
			switch(num)
			{
				case 0:
					cout<<"Zero";
					break;
				case 1:
					cout<<"One";
					break;
				case 2:
					cout<<"Two";
					break;
				case 3:
					cout<<"Three";
					break;
				case 4:
					cout<<"Four";
					break;
				case 5:
					cout<<"Five";
					break;
				case 6:
					cout<<"Six";
					break;
				case 7:
					cout<<"Seven";
					break;
				case 8:
					cout<<"Eight";
					break;
				case 9:
					cout<<"Nine";
					break;
				case 10:
					cout<<"Ten";
					break;
				case 11:
					cout<<"Eleven";
					break;
				case 12:
					cout<<"Twelve";
					break;
				case 13:
					cout<<"Thirteen";
					break;
				case 14:
					cout<<"Fourteen";
					break;
				case 15:
					cout<<"Fifteen";
					break;
				case 16:
					cout<<"Sixteen";
					break;
				case 17:
					cout<<"Seventeen";
					break;
				case 18:
					cout<<"Eighteen";
					break;
				case 19:
					cout<<"Ninteen";
					break;
				case 20:
					cout<<"Twenty";
					break;
			}
		}
	
		else if(num>20 && num<100)
		{
			num1=num/10;
			switch(num1)
			{
				case 2:
					cout<<"Twenty ";
					break;
				case 3:
					cout<<"Thirty ";
					break;
				case 4:
					cout<<"Forty ";
					break;
				case 5:
					cout<<"Fifty ";
					break;
				case 6:
					cout<<"Sixty ";
					break;
				case 7:
					cout<<"Seventy ";
					break;
				case 8:
					cout<<"Eighty ";
					break;
				case 9:
					cout<<"Ninty ";
					break;
			}
			num2=num%10;
			switch(num2)
			{
				case 1:
					cout<<"One";
					break;
				case 2:
					cout<<"Two";
					break;
				case 3:
					cout<<"Three";
					break;
				case 4:
					cout<<"Four";
					break;
				case 5:
					cout<<"Five";
					break;
				case 6:
					cout<<"Six";
					break;
				case 7:
					cout<<"Seven";
					break;
				case 8:
					cout<<"Eight";
					break;
				case 9:
					cout<<"Nine";
					break;
			}
		}
	
		else if(num>=100 && num<1000)
		{
			num3=num/100;
			switch(num3)
			{
				case 1:
					cout<<"One Hundred ";
					break;
				case 2:
					cout<<"Two Hundred ";
					break;
				case 3:
					cout<<"Three Hundred ";
					break;
				case 4:
					cout<<"Four Hundred ";
					break;
				case 5:
					cout<<"Five Hundred ";
					break;
				case 6:
					cout<<"Six Hundred ";
					break;
				case 7:
					cout<<"Seven Hundred ";
					break;
				case 8:
					cout<<"Eight Hundred ";
					break;
				case 9:
					cout<<"Nine Hundred ";
					break;
			}
			num4=num%100;
			if(num4>=1 && num4<=20)
			{
				switch(num4)
				{
					case 1:
						cout<<"and One";
						break;
					case 2:
						cout<<"and Two";
						break;
					case 3:
						cout<<"and Three";
						break;
					case 4:
						cout<<"and Four";
						break;
					case 5:
						cout<<"and Five";
						break;
					case 6:
						cout<<"and Six";
						break;
					case 7:
						cout<<"and Seven";
						break;
					case 8:
						cout<<"and Eight";
						break;
					case 9:
						cout<<"and Nine";
						break;
					case 10:
						cout<<"and Ten";
						break;
					case 11:
						cout<<"and Eleven";
						break;
					case 12:
						cout<<"and Twelve";
						break;
					case 13:
						cout<<"and Thirteen";
						break;
					case 14:
						cout<<"and Fourteen";
						break;
					case 15:
						cout<<"and Fifteen";
						break;
					case 16:
						cout<<"and Sixteen";
						break;
					case 17:
						cout<<"and Seventeen";
						break;
					case 18:
						cout<<"and Eighteen";
						break;
					case 19:
						cout<<"and Ninteen";
						break;
					case 20:
						cout<<"and Twenty";
						break;
				}
			}
			else if(num4>20 && num4<100)
			{
				num5=num4/10;
				switch(num5)
				{
					case 2:
						cout<<"and Twenty ";
						break;
					case 3:
						cout<<"and Thirty ";
						break;
					case 4:
						cout<<"and Forty ";
						break;
					case 5:
						cout<<"and Fifty ";
						break;
					case 6:
						cout<<"and Sixty ";
						break;
					case 7:
						cout<<"and Seventy ";
						break;
					case 8:
						cout<<"and Eighty ";
						break;
					case 9:
						cout<<"and Ninty ";
						break;
				}
				num6=num4%10;
				switch(num6)
				{
					case 1:
						cout<<"One";
						break;
					case 2:
						cout<<"Two";
						break;
					case 3:
						cout<<"Three";
						break;
					case 4:
						cout<<"Four";
						break;
					case 5:
						cout<<"Five";
						break;
					case 6:
						cout<<"Six";
						break;
					case 7:
						cout<<"Seven";
						break;
					case 8:
						cout<<"Eight";
						break;
					case 9:
						cout<<"Nine";
						break;
				}
			}
		}
	}
	else
		cout<<endl<<"You have Entered Invalid Number.\nPlease Enter 3 Digits Positive Number to display it into English.";
	getch();
	return 0;
}
