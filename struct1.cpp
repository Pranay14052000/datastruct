#include<stdio.h>
#include<conio.h>

struct emp
{
	char empname[30];
	char empdept[10];
	int age;
int no;
long int empsal;
	
		
};
int main()

{
	int i,n;
	printf("enter the total no of employees data to be stored\n");
	scanf("%d",&n);
	emp e[n];

	
	for(i=0;i<n;i++)
	{
		printf("\nenter the %d employee details",i+1);
	printf("\nenter employee name\t");
	scanf("\n%s",&e[i].empname);
	printf("\nenter age\t");
	scanf("%d",&e[i].age);
	printf("\nenter emp no\t");
	scanf("\n%d",&e[i].no);
	printf("\nenter salary\t");
	scanf("%d",&e[i].empsal);
	printf("\nenter employee department\t");
	scanf("%s",&e[i].empdept);
	
}
printf("\nall employee details are as follows");
printf("\nName	 age	 employee no	      salary	 department");
for(i=0;i<n;i++)
{
printf("\n%s	 %d	  %d	    	%ld	    	%s",e[i].empname,e[i].age,e[i].no,e[i].empsal,e[i].empdept);
	
}
	
	
	return 0;
	}
