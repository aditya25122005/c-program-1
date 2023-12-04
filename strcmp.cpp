#include<stdio.h>
#include<string.h>
int main(){
	char a []={"HI"};
	char b []={"HI"};
	int result = strcmp(a,b);
	if(result==0){
		printf("Both are equal");
	}
	else{
		printf("Not equal");
	}
	return 0;
}
