#include<stdio.h>
int main()
{
	char ch;
	printf("enter any charecter:");
	scanf ("%c", &ch);
	if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z'))
	{
		printf("c is an alphabet");
	}
	else if(ch>='0' && ch<='9')
	{
		printf("c is a digit");
	}
	else
	{
		printf("c is a special charecter");
	}
	return 0;
}
