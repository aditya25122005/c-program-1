#include<stdio.h>
#include<string.h>
int main(){
	char ch[20];
	printf("enter in lower");
	scanf("%s",&ch);
	printf("%s",strupr(ch));
	return 0;
}
