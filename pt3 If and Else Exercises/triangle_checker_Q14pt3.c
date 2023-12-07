#include <stdio.h>
int main()
{
    printf("-----NAME:AAGAM JAIN ----\n-----SID:23151201----\n");

    int a,b,c,sum;
    printf("Enter three angles of triangle:");
    scanf("%d%d%d",&a,&b,&c);
    sum = a + b + c;
    if(sum == 180 && a > 0 && b > 0 && c > 0) 
    {
        printf("Triangle is valid.");
    }
    else
    {
        printf("Triangle is not valid.");
    }
    return 0;
}