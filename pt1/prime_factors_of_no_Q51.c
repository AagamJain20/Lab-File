#include <stdio.h>
int main()
{
    printf("-----NAME:AAGAM JAIN ----\n-----SID:23151201----\n");

    int i,j,n,p;
    printf("Enter any number to print Prime factors: ");
    scanf("%d",&n);

    printf("All Prime Factors of %d are: \n",n);
    for(i=2; i<=n; i++)
    {
        if(n%i==0)
        {
            p = 1;
            for(j=2; j<=i/2; j++)
            {
                if(i%j==0)
                {
                    p = 0;
                    break;
                }
            }
            if(p==1)
            {
                printf("%d, ", i);
            }
        }
    }
    return 0;
}