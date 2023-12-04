#include<stdio.h>
#include<string.h>
int main(){


char name[1000];
gets(name);

int i=0,l=0;
while(name[i]!='\0')
{
	l++;
	i++;
}
printf("length of string is %d",l);
return 0;
}

