/*Problem:
		Write a program that inputs a number and checks whether the given number is Strong Number or not.
A number is called "Strong Number" if the sum of the factorial of its digit is equal to the number itself.
For example, 145 is a Strong Number, because 1! + 4! + 5! = 145
-------------------------------------------------------------------------------------------------------------------*/


#include <iostream>
using namespace std;
int main()
{
	long num, temp, c, fac, re, sum=0;
	cout<<"Enter Number: ";
	cin>>num;
	for(temp=num;temp!=0;temp/=10)
	{
		fac=1;
		re=temp%10;
		for(c=1;c<=re;c++)
		{
			fac=fac*c;
		}
		sum=sum+fac;
	}
	if(sum==num)
		cout<<"\t"<<num<<" is a Strong Number.";
	else
		cout<<"\t"<<num<<" is not a Strong Number.";
	return 0;
}
