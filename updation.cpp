
// Updation
#include<stdio.h>
int main(){
	int n;
	printf("emter n");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		printf("enter element");
		scanf("%d",&a[i]);
		
}
int pos;
printf("enter pos\n");
scanf("%d",&pos);
int val;
printf("enter value\n");
scanf("%d",&val);
	a[pos]=val;
	for(int i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}
