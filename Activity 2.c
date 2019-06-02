#include <stdio.h>
int main () {
	int number[25]={1,5,8,-9,7,99,-8,76,98,-87,-999,45,67,-188,87,6,10,17,-56,1000,-3,89,-15,33,-899};
	int even=0,odd=0,pos=0,neg=0,i;
	
	for(i=0;i<24;i++){
		if(number[i]>0){
			pos+=1;
		}
		if(number[i]<0){
			neg+=1;
		}
		if(number[i]%2==0){
			even+=1;
		}
		else{
			odd+=1;
		}
	}
	printf("\nThere are %d even numbers in the given Array.",even);
	printf("\nThere are %d odd numbers in the given Array.",odd);
	printf("\nThere are %d negative numbers in the given Array.",neg);
	printf("\nThere are %d positive numbers in the given Array\n\n\nProgram ended gracefully.\n\n",pos);
	
	
	return 0;
}
