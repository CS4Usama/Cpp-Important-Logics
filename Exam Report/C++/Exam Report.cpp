/*Problem:
Write a program in which user enters his all 8 Subject's Marks and it will display his Obtained Marks, Average Marks, Percentage, Grade and Pass or Fail.
-----------------------------------------------------------------------------------------------------------------------------------------------------------*/


#include <iostream>
#include <conio.h>
#include <iomanip>
#include <stdlib.h>
using namespace std;
int main()
{
	system("color A");	//for Green colored output
	
	//Variable Initialization and Declaration.
	int urdu, english, math, physics, biology, chemistry, islamiyat, sst;
	float TotalMarks, sum, avg, per;
	cout<<"Enter Your All Subject's Numbers out of 100 one by one, that you have taken in Exams..."<<endl<<endl;
	
	//Input Values of All Subjects.
	cout<<"First of all, Enter Total Marks of All 8 Subjects in Exams: ";
	cin>>TotalMarks;
	cout<<endl<<"Now, Enter Obtained Numbers out of 100 in all 8 Subjects one by one:.."<<endl;
    cout<<endl<<"Urdu: ";
	cin>>urdu;
	cout<<"English: ";
	cin>>english;
	cout<<"Math: ";
	cin>>math;
	cout<<"Physics: ";
	cin>>physics;
	cout<<"Biology: ";
	cin>>biology;
	cout<<"Chemistry: ";
	cin>>chemistry;
	cout<<"Islamiyat: ";
	cin>>islamiyat;
	cout<<"Social Study: ";
	cin>>sst;
	
	//This section is about Arithmetic Operations on above values.
	sum = urdu+english+math+physics+biology+chemistry+islamiyat+sst;
	cout<<endl<<"Obtained Marks: "<<sum;
	avg = sum/8;
	cout<<endl<<fixed<<setprecision(2)<<"Average Marks: "<<avg;
	per = (sum/TotalMarks)*100;
	cout<<endl<<fixed<<setprecision(2)<<"Percentage: "<<per<<"%"<<endl;
	
	//if else Conditions to show Obtained Grade.
    if(per>90)
    cout<<"Your Grade is: A+"<<endl;
    else if(per>80)
    cout<<"Your Grade is: A"<<endl;
    else if(per>70)
    cout<<"Your Grade is: B"<<endl;
    else if(per>60)
    cout<<"Your Grade is: C"<<endl;
    else if(per>50)
    cout<<"Your Grade is: D"<<endl;
    else if(per>40)
    cout<<"Your Grade is: E"<<endl;
    else
    cout<<"Your Grade is: F"<<endl;

//Another if else Condition to show Pass or Fail.
	if(per>33.00)
	cout<<endl<<"Congratulations! You have Passed."<<endl;
	else
	cout<<endl<<"Alas! You have Failed. You need more Hard Work..."<<endl;

	getch();
	return 0;
}
