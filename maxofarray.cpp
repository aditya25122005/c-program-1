#include<stdio.h>
int main()
{
	int n;
	printf("enter n");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		printf("enter element");
		scanf("%d",&a[i]);
		
	}
	int max=a[0];
	int count=0;
	for(int i=0;i<n;i++){
		if(a[i]>=max){
			max=a[i];
			count =i;
		}
	}
	printf("max is %d at %d",max,count);
	return 0;
}
