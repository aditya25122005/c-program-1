#include<stdio.h>
int main()
{
	int n;
	printf("enter n");
	scanf("%d",&n);
	for(int i=0;i<=n;i++){
		for(int j=0;j<=i;j++){
			printf("%c",i+65);
		}
		printf("\n");
	}
}
