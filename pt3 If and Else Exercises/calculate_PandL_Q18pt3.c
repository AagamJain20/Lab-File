#include <stdio.h>
int main()
{
    printf("-----NAME:AAGAM JAIN ----\n-----SID:23151201----\n");
    int cp,sp, amt; 
    printf("Enter cost price: ");
    scanf("%d", &cp);
    printf("Enter selling price: ");
    scanf("%d", &sp);
    if(sp > cp)
    {
        amt = sp - cp;
        printf("Profit = %d", amt);
    }
    else if(cp > sp)
    {
        amt = cp - sp;
        printf("Loss = %d", amt);
    }
    else
    {
        printf("No Profit No Loss.");
    }
    return 0;
}