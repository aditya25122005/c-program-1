// MULTIPLICATION OF ARRAY//




 #include<stdio.h>
 int main(){
 	int m,n;
 	printf("enter m and n");
 	scanf("%d%d",&m,&n);
 	int a[m][n];
 	int b[m][n];
 	int mul[m][n];
 	printf("MATRIX A");
 	for(int i=0;i<m;i++){
 		for(int j=0;j<n;j++){
 			printf("enter element at %d , %d index",i,j);
 			scanf("%d",&a[i][j]);
 		}
 	}
 	printf("MATRIX B");
 	for(int i=0;i<m;i++){
 		for(int j=0;j<n;j++){
 			printf("enter element at %d ,%d index",i,j);
 			scanf("%d",&b[i][j]);
 		}
 	}
 	for(int i=0;i<m;i++){
 		for(int j=0;j<n;j++){
     mul[i][j]=0;
 	for(int k=0;k<n;k++){
 		mul[i][j] += a[i][k] * b[k][j];
 	}
 	}
 	}for(int i=0;i<m;i++){
 		for(int j=0;j<n;j++){
 			printf("%d",mul[i][j]);
 		}
 		printf("\n");
 	}
 return 0;
 }



