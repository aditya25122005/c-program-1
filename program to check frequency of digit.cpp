// frequency of digit
#include<stdio.h>
int main()
{
	int num,digit,r,count=0;
	
	printf("enter number ");
	scanf("%d",&num);
	printf("enter digit to check frequency");
	scanf("%d",&digit);
	while(num>0)
	{
		r=num%10;
		if(r==digit){
			count++;
		}
		num=num/10;
	}
 printf("frequency of %d is %d",digit,count);
 return 0;	
}
