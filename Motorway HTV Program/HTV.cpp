#include <iostream>
#include <ctime>	//for getting system time
using namespace std;
class Vehicle
{
	
	int type; 	//4 or 6 or 8 wheels
	int wt;
	int speed;
	
	
			//Exception class/es should be here				5Points
	public:
		
	void getData()
	{
		cout<<"\nEnter Weight in Kg: ";
		cin>>wt;
		cout<<"\nEnter Speed: ";
		cin>>speed;
	}
	
	bool check_summer()
	{
		//It will return true if System Date is between 1st April to 30th September		(2 Points)
		time_t pc = time(NULL);
		struct tm *date = localtime(&pc);
		int x = date->tm_mday;
		int y = 1+date->tm_mon;
		if((x==1 && y==4) >= (x==30 && y==9))
			return true;
	}
	
	void checkwheel(int x)
	{
		type=x;
		getData();
	    int perwheel_wt_limit_summer=400; 	//summer between 1st Apr to 30th Sep
	    int perwheel_wt_limit_winter=500;
	    int over_weight_fine_perKg=10;  		//On extra weight only
	    int speed_limit=110;
	    int speedfine=3000;			//fix fine for all type of vehicles
	    int fine=0;
	    int allowed_weight;
		
		//Calculate allowed_weight here					(2 Points)
		if(check_summer()==true)
			allowed_weight=perwheel_wt_limit_summer;
		else
			allowed_weight=perwheel_wt_limit_winter;
		out:
		if(wt<=allowed_weight&&speed<=110)
	        cout<<"\nPerfect Driving, No fine";
	    else
	    {
	//All the three exceptions thrown from here based on if else conditions.		6Points
			try
			{
				if(speed>speed_limit && wt<=allowed_weight)
				{
					throw speed_limit;
				}
				else if(wt>allowed_weight && speed<=speed_limit)
				{
					throw 'a';
				}
				else if(wt>allowed_weight && speed>speed_limit)
				{
					throw 12.12;
				}
			}
			catch(int speed_limit)
			{
				fine=3000;
				cout<<endl<<"Exception raised due to Over Speeding and the Fine is Rs. "<<fine<<endl;
			}
			catch(char a)
			{
				fine=(wt%allowed_weight)*over_weight_fine_perKg;
				cout<<endl<<"Exception raised due to Over Weighting and the Fine is Rs. "<<fine<<endl;
			}
			catch(double z)
			{
				fine=3000+((wt%allowed_weight)*over_weight_fine_perKg);
				cout<<endl<<"Exception raised due to Over Weighting and Over Speeding and the Fine is Rs. "<<fine<<endl;
			}
		}
	}
};

int main()
{	//Add try and catch blocks somewhere in the main function at suitable place	5Points
	int option;
	char optionc;
	Vehicle v1;
	
	do
	{
		system("cls");
		cout << "\n\t\t\t&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&";
		cout << "\n\t\t\t Welcome to HTV Limit Check Program";
		cout << "\n\t\t\t&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&";
		cout << "\n\n\tPress 1 for 4 wheel truck";
		cout << "\n\tPress 2 for 6 wheel truck";
		cout << "\n\tPress 3 for 8 wheel truck";
		cout << "\n\n\tEnter Option: ";
		cin >> option;
		switch (option)
		{
		        case 1: v1.checkwheel(4);   break;
		        case 2: v1.checkwheel(6);   break;
		        case 3: v1.checkwheel(8);   break;
		        default: cout<<"\nInvalid Option";
		}
		cout << "\n\n\tDo you want to continue...y/n: ";
		cin>>optionc;
	} while (optionc == 'y');
	cout << "\n\tGood Bye..!";
	return 0;
}
