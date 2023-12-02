// print even elements

 #include<stdio.h>
 int main()
 {
     int n;
     printf("enter a number");
     scanf("%d",&n);
     int a[n];
     for(int i=0;i<n;i++){
         printf("enter element ");
         scanf("%d",&a[i]);
     }

     for(int i=0;i<n;i++){
 if(a[i]%2==0){
     printf("%d ",a[i]);
 }
     }
     return 0;
 }
