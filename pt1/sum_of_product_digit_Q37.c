#include <stdio.h>
int main()
{
    printf("-----NAME:AAGAM JAIN ----\n-----SID:23151201----\n");
    
    int n;
    long long product=1ll;
    printf("Enter any number to calculate product of digit: ");
    scanf("%d", &n);

    product = (n==0 ? 0 : 1ll);
    while(n!= 0)
    {
        product = product * (n % 10);
        n = n / 10;
    }

    printf("Product of digits = %lld", product);

    return 0;
}