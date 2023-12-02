// INSERTION



 #include<stdio.h>
 int main()
 {
     int n;
     int pos;
     printf("enter pos");
     scanf("%d",&pos);
     int elem;
     printf("enter element");
     scanf("%d",&elem);

     printf("enter size of array");
     scanf("%d",&n);
     int a[n];
     for(int i=0;i<n;i++)
     {
         printf("enter element at %d,index",i);
         scanf("%d",&a[i]);
     }
     for(int i=0;i<n;i++){
         printf(" %d",a[i]);
     }
     printf("\n");


 for(int i=n;i>pos;i--)
 {
     a[i]=a[i-1];
 }
 a[pos]=elem;
 n++;
 for(int i=0;i<n;i++)
 {
     printf("%d ",a[i]);
 }
 }




