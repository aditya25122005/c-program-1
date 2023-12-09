// program to create functionfor  addition subtraction,and print name, roll no, addition subtraction
#include<stdio.h>
void add();
void subtraction();

void add()
{
	int a,b,sum;
	printf("enter two numbers\n");
	scanf("%d%d",&a,&b);
	sum=a+b;
	printf("\nsum is %d\n",sum);
}

void subtraction()
{
	int a,b,sub;
	printf("enter two numbers\n");
	scanf("%d%d",&a,&b);
	sub=a-b;
	printf("\nsubstraction is %d\n",sub);
}
int main()
{
    printf("aditya\n");
    printf("Roll no:4");
	 add();
	 subtraction();
}
