#include <stdio.h>
int main()
{
	printf("-----NAME:AAGAM JAIN ----\n-----SID:23151201----\n");
	
    char gender;
    printf("Enter the gender character (M/m or F/f): ");
    scanf("%c", &gender);
    switch(gender)
    {
        case 'M':
        case 'm':
            printf("The gender is Male.\n");
            break;
        case 'F':
        case 'f':
            printf("The gender is Female.\n");
            break;
        default:
            printf("The gender is Unspecified.\n");
            break;
    }
    return 0;
}