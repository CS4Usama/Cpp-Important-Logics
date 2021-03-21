//Program to Assign values to Variables with New ways and display Memory Allocated Address of a Variable.


#include <iostream>
using namespace std;
int main()
{
	//Normal Method of initializing Variables:
	int a=5;
	cout<<"a = "<<a<<endl<<endl;
	
	/* Constructer initialization: */
	//Method 1:
	int b=(10);
	cout<<"b = "<<b<<endl<<endl;
	//Method 2:
	int c(15);
	cout<<"c = "<<c<<endl<<endl;
	
	/* Uniform initialization: */
	//Method 1:
	int d={20};
	cout<<"d = "<<d<<endl<<endl;
	//Method 2:
	int e{25};
	cout<<"e = "<<e<<endl<<endl;
	
	/* if I write data_type variable[value] then it will display its associated Memory Allocation Address.
	For example: int f[30] it will display 0x6ffd90 which is its Allocated Address in RAM. Actually, f[30] is an Array of 30 Elements.*/
	int f[30];
	cout<<"f = "<<f<<endl;
	return 0;
}
