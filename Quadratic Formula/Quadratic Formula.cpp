//Write a Program to find Roots by using the Quadratic Formula.


#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	long double a, b, c, sq, ans1, ans2;
	cout<<"Enter Value of A, B and C:  ";
	cin>>a>>b>>c;
	sq=sqrt((b*b)-(4.0*a*c));
	ans1=(-b+sq)/(2.0*a);
	if(sq>0)
		cout<<endl<<"Answer of 1st Root is:  "<<ans1<<endl;
	else
		cout<<endl<<"The Roots are imaginary.";
	sq=sqrt((b*b)-(4.0*a*c));
	ans2=(-b-sq)/(2.0*a);
	if(sq>0)
		cout<<"Answer of 2nd Root is:  "<<ans2;
	return 0;
}
