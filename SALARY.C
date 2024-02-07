#include <stdio.h>

int main()
{
    int ID, workingHR, salary_Hr=15000,salary;
    printf("Enter Employ Id:");
    scanf("%d",&ID);
    
    printf("Enter Working Hrs:"); 
    scanf("%d",&workingHR);
    
    
    printf("\n\tEmployee ID =%d",ID); 
    
    salary=workingHR*salary_Hr; 
    printf("\n\tSalary is %d ", salary);
    
    return 0;
    
}
