#include<stdio.h>
#include<string.h>
int main(){
	char a[10]={"THIS IS"};
	char b[10]={" GLA"};
	strcat(a,b);
	puts(a);
	puts(b);
	return 0;
}
