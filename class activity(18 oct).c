#include <stdio.h>
int main () {
	int i,j,max=0,max1=0,num[4]={90,100,80,70};
	float avg;
	
	for(i=0;i<4;i++){
		if(num[i]>max){
			max=num[i];
		}
	}
	for(j=0;j<4;j++){
		if(num[j]>max1 && num[j]!=max){
			max1=num[j];
		}
	}
	printf("\nThe largest number is %d and the second last largest number is %d\n\n",max,max1);
	
	avg=(max1+max)/2;
	printf("The average of the the largest and the Second last largest is %.1f\n\nProgram ended gracefully.\n\n",avg);
	return 0;
}
