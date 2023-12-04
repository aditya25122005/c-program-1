//return subtraction of two numbers using functions
#include<stdio.h>
#include<conio.h>
int sub(int,int);
int main()
{
	int a,b;
	printf("enter a nad b");
	scanf("%d%d",&a,&b);
	printf("difference of %d and %d is %d",a,b,sub(a,b));
	return 0;
	
}
int sub(int x,int y)
{
	int c;
	c=x-y;
	return c;
}
