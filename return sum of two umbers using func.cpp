
// return sum of two numbers using function
#include<stdio.h>
#include<conio.h>
int sum(int,int);
int main()
{
	int a,b;
	printf("ENter Two Numbers");
	scanf("%d%d",&a,&b);
	printf("sum of %d and %d is %d",a,b,sum(a,b));
	return 0;
}

int sum(int x,int y)
{
	int c;
c=x+y;
return c;
}
