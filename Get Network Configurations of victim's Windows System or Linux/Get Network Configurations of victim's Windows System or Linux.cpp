//Program to get the IP Address of the victim's Windows System or Linux PC.


#include <stdlib.h>
#include <conio.h>
#include <stdlib.h>
main()
{
	system("color A");	//for Green colored output
	system("c:\\windows\\system32\\ipconfig /all");
	//For Linux:	system("/sbin/ifconfig");
	system("c:\\windows\\system32\\getmac");
	getch();
}
