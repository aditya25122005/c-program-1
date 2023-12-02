#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n;
    printf("enter n");
    scanf("%d",&n);
    int rem=0,r,c;
    c=n;
    while(n>0)
    {
        r=n%10;
        rem =(r*r*r)+rem;
        n=n/10;
    }
    if(c==rem){
        printf("Armstrong Number.");
    }
    else{
        printf("NotArmstrong.");
    }
    return 0;
}
