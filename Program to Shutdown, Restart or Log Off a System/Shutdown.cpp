//A program to Shut Down or Restart or Log Off victim's PC. (Both for Linux & Windows System)


#include <stdlib.h>
using namespace std;
int main()
{
	system("c:\\windows\\system32\\shutdown /s");	//. 	/r  for Restart,   /l  for Log Off.
	//For Linux:	system("sudo shutdown now");  OR  system("shutdown now -P");
	return 0;
}
