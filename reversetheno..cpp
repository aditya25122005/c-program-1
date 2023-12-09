// program for reversing the number
#include<stdio.h>
int main()
{
	int n;
	int r,rem=0;
	printf("enter n");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		printf("%d",r);
		n=n/10;
		
	}
}
