#include<stdio.h>
int main(){
	int n=1001,r,b=1,base=1;
	while(n>0)
	{
	
	r=n%10;
	b=b+r*base;
	n=n/10;
	base=base*2;
}
printf("decimal is %d",b);
return 0;
}
