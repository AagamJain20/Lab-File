#include<stdio.h>
int main()
{
    printf("-----NAME:AAGAM JAIN ----\n-----SID:23151201----\n");
    
    int n;
    printf("Enter No Here:-");
    scanf("%d",&n);
    
    printf("Natural numbers from %d-1 in reverse\n",n);
    for(int i=n;i>=1;i--)
    {
        printf("%d\n",i);
    }
    return 0;   
}
