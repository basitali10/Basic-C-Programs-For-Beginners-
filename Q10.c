#include <stdio.h>
#include<math.h>

double hypotenuse(double x,double y);
int main () {
	double side1,side2,ans;
	printf("Enter the perpendicular side (side 1) in cm : ");
	scanf("%lf",&side1);
	printf("\nEnter the base side (side 2) in cm: ");
	scanf("%lf",&side2);
	ans=hypotenuse(side1,side2);
	printf("\n\nThe hypotenuse of the right angle triangle is : %.1lf cm\n\nProgram ended gracefully.\n\n ",ans);
}

double hypotenuse(double x,double y){
	double hyp;
	hyp=sqrt((pow(x,2)+pow(y,2)));
	return hyp;
}
