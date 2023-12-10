#include<stdio.h>
#include<math.h>
void armstrong();
void perfect(); 
void prime();
void prime()
{
	int n;
	int count=0;
	printf("enter n\n");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		if(n%i==0){
			count++;
		}
	}
	if(count==2){
		printf("prime");
	}
	else{
		printf("not prime");
	}
}
void perfect()
{
	int n;
	int sum=0;
	printf("enter n");
	scanf("%d",&n);
	for(int i=1;i<n;i++)
	{
		if(n%i==0){
			sum+=i;
		}
	}
	if(sum==n){
		printf("perfect");
	}
	else{
		printf("not perfect");
	}
}
 void armstrong()
{
	int n;
	
	printf("enter number");
	scanf("%d",&n);
	int r,rem=0;
	int c=n;
	while(n>0)
	{
		r=n%10;
		rem=(r*r*r)+rem;
		n=n/10;
	}
	if(c==rem){
		printf("armstrong");
	}
	else{
		printf("not");
	}
}
int main(){
	armstrong();
	perfect();
	prime();
}
