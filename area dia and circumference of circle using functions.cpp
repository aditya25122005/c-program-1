// diameter area and circumference using function
#include<stdio.h>
void area();
void diameter();
void circumference();
void circumference()
{
	float rad;
	float circum;
	printf("Enter Radius");
	scanf("%f",&rad);
	circum=2*3.14*rad;
	printf("%.2f",circum);
}
void diameter(){
	int r;
	int dia;
	printf("\nenter radius\n");
	scanf("%d",&r);
	dia=2*r;
	printf("\nDIAMETER IS %d\n",dia);
}
void area(){

     float r;
	float area;
	
	printf("enter r\n");
	scanf("%f",&r);
	area=3.14*r*r;
	printf("\nAREA IS %.2f\n",area);
	
}
int main(){
   area();
   diameter();
   circumference();
}

