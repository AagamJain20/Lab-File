#include <stdio.h>
int main()
{ 
	printf("-----NAME:AAGAM JAIN ----\n-----SID:23151201----\n");
	
    int n,f,l,sum;
    printf("Enter any number: ");
    scanf("%d", &n);
    f = n;
    l = n;    
    while(f >= 10)
    {
        f = f / 10;
    }

    while (l>=10)
    {
        l = l % 10;
    }

    sum=f+l;
    printf("Sum of first and last is:%d",sum);
    return 0;
}