#include <stdio.h>
#include <string.h>

#define USERNAME "varun"
#define PASSWORD "231601117"
int main()
{
	printf("------NAME:AAGAM JAIN ----\n-----SID:23151201----\n");

	int validate(char user[], char pass[])
	{
		if (strcmp(user, USERNAME) == 0 && strcmp(pass, PASSWORD) == 0)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
    char user[20], pass[20];
    printf("Enter username:");
    scanf("%s", &user);
    printf("Enter password:");
    scanf("%s", &pass);
    if (validate(user, pass))
	{
        printf("Login successful.\n");
    } 
	else
	{
        printf("Invalid username or password.\n"); 
    }
    return 0;
}
