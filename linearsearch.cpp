#include<stdio.h>
int main(){
	int n;
	printf("enter size");
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		printf("enter elements");
		scanf("%d",&a[i]);
	}

	int item =130;
	for(int i=0;i<n;i++){
		if (a[i]==item){
			printf("element found. at %d\n",i);
			break;
		}
	
	}
	
	
	
	return 0;
}
