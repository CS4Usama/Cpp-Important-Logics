#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
	system("color A");
	int u,e,m,p,b,c,i,s;
	float tm,sum,avg,per;
	printf("Enter Your All Subjects Numbers one by one, that you take in Exams...\n");
	
	printf("\nToal Marks of All Subjects in Exams: ");
	scanf("%f",&tm);
    printf("\nUrdu:  ");
	scanf("%d",&u);
	printf("English:  ");
	scanf("%d",&e);
	printf("Math:  ");
	scanf("%d",&m);
	printf("Physics:  ");
	scanf("%d",&p);
	printf("Biology:  ");
	scanf("%d",&b);
	printf("Chemistry:  ");
	scanf("%d",&c);
	printf("Islamiyat:  ");
	scanf("%d",&i);
	printf("Social Study:  ");
	scanf("%d",&s);
	
	sum = u+e+m+p+b+c+i+s;
	printf("\nObtained Marks: %.0f\n",sum);
	avg = sum/8;
	printf("Average Marks: %.2f\n",avg);
	per = (sum/tm)*100;
	printf("Percentage: %.2f\n",per);

    if(per>90)
    printf("Your Grade is: A+\n");
    else if(per>80)
    printf("Your Grade is: A\n");
    else if(per>70)
    printf("Your Grade is: B\n");
    else if(per>60)
    printf("Your Grade is: C\n");
    else if(per>50)
    printf("Your Grade is: D\n");
    else if(per>40)
    printf("Your Grade is: E\n");
    else
    printf("Your Grade is: F\n");

	if(per>33.00)
	printf("\nCongratulations! You have Passed.\n");
	else
	printf("\nAlas! You have Failed. You need more Hard Work...");

	getch();
}
