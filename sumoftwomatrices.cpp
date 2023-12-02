

// SUM  OF  TWO MATRIX//
#include<stdio.h>
 int main(){
 	int m,n;
 	printf("enter m and n");
 	scanf("%d%d",&m,&n);
 	int a[m][n];
 	int b[m][n];
 	int r[m][n];
	

	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			printf("enter element at %d,%d index\n",i,j);
			scanf("%d",&a[i][j]);
 		}}
 	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
 			printf("enter element at %d,%d index\n",i,j);
		scanf("%d",&b[i][j]);		
	}}
for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			r[i][j]=a[i][j] + b[i][j];

		}
 	}
 	for(int i=0;i<m;i++){
 		for(int j=0;j<n;j++){
 printf("%d ",r[i][j]);
 		}
 		printf("\n");
 	}

 return 0;
 }

