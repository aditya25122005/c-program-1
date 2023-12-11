#include<stdio.h>
int main()
{
	int n,m;
	int count=0;
	printf("enter m and n");
	scanf("%d%d",&m,&n);
	int a[m][n];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("enter element at %d,%d index",i,j);
			scanf("%d",&a[i][j]);
			if(a[i][j]==0){
				count++;
			}
		}
	}
		if(count>(m*n)/2){
			printf("sparse");
		}
		else{
			printf("not sparse");
		}
	return 0;
}
