#include<stdio.h>

void dectobin(unsigned long long x);

int main () {
	unsigned long long dec;
	do{
	printf("Enter the decimal number : ");
	scanf("%llu",&dec);
	if(dec!=-1){
		printf("\nThe binary equivalent of %lluD is :   ",dec);
	dectobin(dec);
	}	
	}
	while(dec!=-1);
	printf("\n\nProgram ended gracefully.\n\n");
	return 0;
}

void dectobin(unsigned long long x){
	int i=0,j,remainder,binary_array[100];
	while(x>0){
		remainder=x%2;
		binary_array[i]=remainder;
		x=x/2;
		i++;
	}
	for(j=i-1;j>=0;j--){
		printf("%d",binary_array[j]);
	}
	printf("B\n\n");
	
}
