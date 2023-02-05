#include<stdio.h>
int main()
{
	float phy,chem,bio,maths,comp;
	float per;
	printf("enter the marks of five subjects ");
	scanf("%f%f%f%f%f",&phy,&chem,&bio,&maths,&comp);
	per=((phy+chem+bio+maths+comp)/5);
	printf("percentage=%.2f\n",per);
	if(per>=90)
	{
		printf("grade A");
	}
	else if(per>=80)
	{
		printf("grade B");
	}
	else if(per>=70)
	{
		printf("grade C");
	}
	else if(per>=60)
	{
		printf("grade=D");
	}
	else if(per>=40)
	{
		printf("grade E");
	}
	else
	{
		printf("grade F");
	}
	return 0;
}
