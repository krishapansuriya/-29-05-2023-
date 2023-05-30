#include<stdio.h>
main()
{
	char a[100],b[100];
	printf("Enter string:-");
	gets(a);
	strcpy(b,a);
	strrev(b);
	if(strcmp(a,b)==0)
	{
		printf("Your string is a palindrome.");
	}
	else
	{
		printf("Your string is not a palindrome.");
	}
}
