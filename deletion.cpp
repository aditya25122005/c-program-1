//deletion
#include<stdio.h>
int main(){
	int n;
	printf("enter n");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		printf("enter elements at %d index ",i);
		scanf("%d",&a[i]);
	}
	
	int pos;
	printf("enter position");
	scanf("%d",&pos);
	
	
	for(int i=pos;i<n;i++)
	{
		a[i]=a[i+1];
	}
	for(int i=0;i<n-1;i++){
		printf(" %d\n",a[i]);
	}
	return 0;
}
