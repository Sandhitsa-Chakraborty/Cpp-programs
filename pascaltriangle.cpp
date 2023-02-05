#include<stdio.h>
int main()
{
	int n,i=1,j=0,k=1;
	printf("enter the number of lines");
	scanf("%d",&n);
	while(i<=n)
	{   
		j=0;
		while(j<n-i)
		{
			printf("  ");
			j=j+1;
		}
		j=0;
		while(k>j)
		{
			printf("* ");
			j=j+1;
		}
		k=k+2;
		i=i+1;
		printf("\n");
	}
	return 0;
}
