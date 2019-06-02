#include<stdio.h>

double speed(int m,double s);

int main () {
	int min;
	double sec,ans;
	printf("Enter the race time (minutes then seconds) : ");
	scanf("%d%lf",&min,&sec);
	ans=speed(min,sec);
	printf("\n\nProgram ended gracefully.\n\n");
	return 0;
}

double speed(int m,double s){
	int df=5280;
	double tt,fps,mps;
	tt=(m*60)+s;
	fps=5280/tt;
	mps=1609.34/tt;
	printf("\nThe speed in feets per second is : %.2lf fps ",fps);
	printf("\nThe speed in meters per second is : %.2lf  mps ",mps);
}
