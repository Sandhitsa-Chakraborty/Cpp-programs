#include<iostream>
using namespace std;
int main()
{
	int a,n,p,s=0;
	cout<<"enter a number:";
	cin>>n;
	p=n;
	while(p!=0)
	{
		a=p%10;
		s=s+(a*a*a);
		p=p/10;
	}
	if(s==n)
	{
		cout<<"armstrong";
	}
	else
	{
		cout<<"not armstrong";
	}
	return 0;
}
