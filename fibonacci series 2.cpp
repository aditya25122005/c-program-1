// print fibonacci series upto n
//0+1+1+2+3+5+8+13----

#include<stdio.h>
int main()
{
	int n;
	int a=0,b=1,c;
	
	printf("enter n");
	scanf("%d",&n);
	printf("%d,%d",a,b);
	for(int i=1;i<=n;i++){
		printf("\n%d \n",a);
		c=a+b;
		b=a;
		c=b;
	}
	return 0;
}
