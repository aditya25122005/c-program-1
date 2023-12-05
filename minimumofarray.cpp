//mmin element of array
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

int min =a[0];
int count=0;
for(int i=0;i<n;i++)
{
	if(a[i]<=min){
		min=a[i];
		count=i;
	}
}
printf("minima is %d at %d",min,count);
}
