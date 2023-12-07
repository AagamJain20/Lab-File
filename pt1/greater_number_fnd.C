#include<stdio.h>
int main()
{
	printf("-----NAME:AAGAM JAIN ----\n-----SID:23151201----\n");
	
	int a,b;
	printf("Enter 1st number:");
	scanf("%d",&a);
	printf("Enter 2nd number:");
	scanf("%d",&b);

	printf("\n");
	
	(a>b)?(printf("\n:: %d is greater than %d ::\n",a,b)):(printf("%d is greater than %d",b,a));
	
	return 0;
}