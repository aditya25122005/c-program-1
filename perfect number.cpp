#include<stdio.h>
int main() {
int n;    //  6--> 1,2,3  divisibe by them 1+2+3=6

int sum =0;
printf("enter n");
scanf("%d",&n);
for(int i=1;i<n;i++){
	if(n%i==0){
		sum = sum + i;
	}
}	
if(sum==n){
	printf("perfect number");
}
else{printf("not a perfect number");
}
return 0;
}
