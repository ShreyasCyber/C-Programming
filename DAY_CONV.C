#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	int no_of_days,year,month,week,days;
	printf("\n\t Enter number of days:");
	scanf("%d",&no_of_days);

	year=no_of_days/365;
	month= (no_of_days%365)/30;
	week= ((no_of_days%365)%30)/7;
	days= (((no_of_days%365)%30)%7);

	printf("\n\t Years:%d",year);
	printf("\n\t Month:%d",month);
	printf("\n\t weeks:%d",week);
	printf("\n\t Days:%d",days


	// Output
/*


	 Enter number of days:179

	 Years:0
	 Month:5
	 weeks:4
	 Days:1


 */




























                                                                                
                                                                                
                                                                                
);
	getch();
}










