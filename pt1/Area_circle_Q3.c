#include<stdio.h>
int main()
{
	printf("-----NAME:AAGAM JAIN ----\n-----SID:23151201----\n");
	
	int num;
	float pie,area;
	printf("Enter radius:");
	scanf("%d",&num);
	pie=3.14159;
	area=pie*(num*num);
	printf("Ans= %f",area);
	
	return 0;
}