#include<stdio.h>
int main()
{
	int n;
	printf("enter n");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		printf("enter no. %d element",i+1);
		scanf("%d",&a[i]);
	}
	printf("BEFORE SORT\n");
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
    for(int i=1;i<n;i++){
		for(int j=0;j<n-i;j++){
			if(a[j]>a[j+1]){
				int x=a[j];
				a[j]=a[j+1];
				a[j+1]=x;
			}
		}
	}
	printf("\nAFTER SORT\n");
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}

return 0;
}
