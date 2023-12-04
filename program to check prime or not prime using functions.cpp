//
//#include<stdio.h>
//
//
//void prime(int);
//int main()
//{
//    int i;
//    printf("enter i");
//    scanf("%d",&i);
//    prime(i); // call by value
//    return 0;
//}
//void prime(int i)
//{
//    int x,count=0;
//    for(x=1;x<=i;x++)
//    {
//        if(i%x==0)
//        count++;
//}
//    if(count==2)
//    {
//        printf("\nTHE NO IS PRIME");
//    }
//    else{
//        printf("\n Not prime");
//    }
//
//}

#include<stdio.h>
int prime(int);
int main()
{
	int n;
	printf("enter n");
	scanf("%d",&n);
	printf("%d is %d",n,prime(1));
	return 0;
}
int prime(int x)
{
	int count=0;
	for(int i=1;i<=x;i++)
	{
		if(x%i==0){
			count++;
		}
		if(count==2){
			return 1;
		}
		else{return 2;
		
		}
	}
}
