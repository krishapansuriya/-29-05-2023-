#include<stdio.h>
main()
{
	char a[100],b[100];
	printf("Enter the usrname:-");
	gets(a);
	printf("Enter the password:-");
	gets(b);
	if(strcmp(a,"krisha@003889")==0)
	{
		if(strcmp(b,"krisha@000")==0)
		{
			printf("Welcome.....successfully logging.");
		}
		else
		{
			printf("Password entered is invaild.");
		}
	}
	else
	{
		printf("Username entered is invaild.");
	}
}
