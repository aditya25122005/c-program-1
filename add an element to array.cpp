#include<stdio.h>
int main()
{
	int n=5;
	int a[n]={10,20,30,40,50};
	int pos=2;
	int element=70;
	
	for(int i=n;i>=pos;i--)
	{
		a[i]=a[i-1];
	}
	a[pos]=element;
	n++;
	for(int i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}
