#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();

	int average,fuel,distance_travel;
	printf("\n\tEnter distance traveled:");
	scanf("%d",&distance_travel);

	printf("\n\tEnter fuel spent:");
	scanf("%d",&fuel);

	average=distance_travel/fuel;
	printf("\n\tBike Average is %d",average);

	getch();

}