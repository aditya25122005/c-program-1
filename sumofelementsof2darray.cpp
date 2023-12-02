

/*print sum of all element of 2d array*/
 #include<stdio.h>
 int main(){
 	int m,n;
 	int sum=0;
 	printf("enter m and n");
 	scanf("%d%d",&m,&n);
 	int a[m][n];
 	for(int i=0;i<m;i++){
 		for(int j=0;j<n;j++){
 			printf("enter element at %d,%d index",i,j);
 			scanf("%d",&a[i][j]);
 			sum=sum+a[i][j];
 		}
 	}
 	printf("%d",sum);
 	return 0;
 }


