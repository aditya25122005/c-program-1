// wap to find perimeter of square and volume of cube without passing argument and return type
#include<stdio.h>
void perimeter();
void volume();

void perimeter()
{
	int side=4,p;
	
	p=4*side;
	printf("%d\n",p);
	
}
void volume()
{
	int s=5,vol;
	printf("\nplz enter side\n");
	scanf("%d",&vol);
	vol=s*s*s;
	printf("%d",vol);
}
int main()
{
	perimeter();
	volume();
	
}
