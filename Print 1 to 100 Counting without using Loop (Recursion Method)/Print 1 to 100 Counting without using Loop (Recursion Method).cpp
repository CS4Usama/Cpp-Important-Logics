//Write a program that prints numbers from 1 to 100 without using loop.

#include <iostream>
using namespace std;
void Num(unsigned int n = 100)
{
	//We will print 1 to 100 counting using Recursion
	if(n>0)
	{
		Num(n-1);
		cout<<n<<"\t";
	}
}
	
int main()
{
	cout<<"Counting from 1 to 100 is as follows:"<<endl;
	Num();
	return 0;
}
