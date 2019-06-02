#include<stdio.h>
int main (){
	
	int size,target,i,j,count=0;
	printf("Enter the number of integers: ");
	scanf("%d",&size);
	int number[size];
	printf("\nStart entering the numbers: \n");
	for(i=0;i<=size-1;i++){
		scanf("%d",&number[i]);
	}
	printf("Enter the number you want to search: ");
	scanf("%d",&target);
	
	for(j=0;j<=size-1;j++){
		if(number[j]==target){
			count+=1;
		}
	}
	
	if(count>=1){
		printf("\n\nThe required target(integer) is present %d time in the above entered numbers.\n\n\nProgram Ended gracefully.",count);
	}
	else{
			printf("\n\nThe collection of the numbers you entered does not contain the desired integer.\n\n\nProgram Ended gracefully.\n\n");
		}
	
	
	
	return 0;
}
