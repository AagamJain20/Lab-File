#include <stdio.h>
int main()
{
    printf("-----NAME:AAGAM JAIN ----\n-----SID:23151201----\n");
    
    int n, i, sum = 0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("The sum of all elements of the array is: %d\n", sum);
    return 0;
}