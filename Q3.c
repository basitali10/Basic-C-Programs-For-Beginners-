#include<stdio.h>

double acceleration(double a,double b,int c,double d);

int main () {
	double vi,vf,min,sec,ans;
	printf("Enter the inital velocity of the cycle in miles/hr : ");
	scanf("%lf",&vi);
	printf("Enter the final velocity of the cycle in miles/hr : ");
	scanf("%lf",&vf);
	printf("Enter the time in (minutes then seconds) : ");
	scanf("%d%lf",&min,&sec);
	ans=acceleration(vi,vf,min,sec);
	if(ans>=0){
		printf("\n\nThe acceleration of the cycle is : %.2lf (mi/hr^2)",ans);
	}
	else{
		printf("\n\nThe retardation of the cycle is : %.2lf (mi/hr^2)",ans);
	}
	printf("\n\nProgram ended gracefully.\n\n");
	return 0;
}

double acceleration(double a,double b,int c,double d){
	double t,acce,a1,b1,accefinal;
	t=(c*60)+d;
	a1=(a*1.61*1000)/3600;
	b1=(b*1.61*1000)/3600;
	acce=(b1-a1)/t;
	accefinal=(acce*3600)/(1.61*1000);
	
	return accefinal;
	
}


