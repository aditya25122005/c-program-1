

#include<stdio.h>
int main()
{
	int unit;
	printf("enter unit consumed\n");
	scanf("%d",&unit);

	printf("Customer IDNO :1001\n");
	printf("Customer Name :James\n");
	printf("units consumed :%d\n",unit);	

	
	if(unit<=19) {
		float charge =1.20*unit;
		printf("Amount charges @1.20 per unit : %.2f\n",charge);
	}
	else if (unit>=200 && unit<400) {
		float charge =1.50*unit;
		printf("Amount charges @1.50 per unit : %.2f",charge);
	}

	
	else if(unit>=400 && unit<600) {
		float charge =1.80*unit;
		float  ex_charge = 1.80*0.15*unit;
		float net = charge+ex_charge;
		printf("Subcharge amount : %f",ex_charge);
		printf("Net amount paid by customer : %.2f",net);
		
	}
	else if (unit>=600) {
		float charge = 2*unit;
		float ex_charge = 2*0.15*unit;
		float net = charge+ex_charge;
		printf("Subcharge amount : %.2f",ex_charge);
		printf("Net amount paid by customer : %.2f",net);
	}
	
}
