#include<stdio.h>
#include<string.h>
int main(){
	char name[100];
	gets(name);
	int i=0,l=0;
	while(name[i]!='\0')
	{
		l++;
		i++;

	}
	printf("length of string is %d\n",l);
	for(int i=l-1;i>=0;i--)
	{
		printf("%c",name[i]);
	}
	return 0;
}
