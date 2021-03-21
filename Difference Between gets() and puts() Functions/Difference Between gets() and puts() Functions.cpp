/*Problem:
Write a program that can take input of Multiple Sentences from the User using gets() function and then display Output using puts() function.
------------------------------------------------------------------------------------------------------------------------------------------------*/


#include <iostream>
#include <conio.h>
#include <fstream>
using namespace std;
int main()
{
	char a[100];
	gets(a);
	/*Here gets() function is used to take input of
	'Multiple Character or Sentences' from the user*/
	cout<<endl<<"\tYour Input is:  ";
	puts(a);
	getch();
	return 0;
}
