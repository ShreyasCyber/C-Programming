#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();

	int num1,num2,num3,max;
	printf("Enter num1:");
	scanf("%d",&num1);

	printf("Enter num2:");
	scanf("%d",&num2);

	printf("Enter num3:");
	scanf("%d",&num3);

	if(num1>num2)
	{
		if(num1>num3)
		{
			max=num1;
		}
		else
		{
			max=num3;
		}
	}
	else
	{
		if(num2>num3)
		{
			max=num2;
		}
		else
		{
			max=num3;
		}
	}

	printf("Max Number is %d",max);

	getch();

}
	//Output...

/*

Enter num1:15
Enter num2:243
Enter num3:234
Max Number is 243


*/

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                








