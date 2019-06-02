#include<stdio.h>

double housecost(double x,double y,double z);

int main () {
	double int_price,tax_rate,fuel_cost,total_price;
	printf("Enter the initial price of the house : ");
	scanf("%lf",&int_price);
	printf("\nEnter the annual fuel cost : ");
	scanf("%lf",&fuel_cost);
	printf("\nEnter the annual tax rate : ");
	scanf("%lf",&tax_rate);
	total_price=housecost(int_price,fuel_cost,tax_rate);
	printf("\nThe total cost of the house after a five year period is : $%.2lf",total_price);
	printf("\n\nPrgram ended gracefully. \n\n");
	}
	
double housecost(double x,double y,double z){
	   double t1,t5,f5,ans;
	   t1=z*x;
	   t5=t1*5;
	   f5=y*5;
	   ans=x+t5+f5;
	   return ans;
	}
