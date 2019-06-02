#include<stdio.h>

int main () {
	float sal_amt,comm,exceeding;
	int id;
	//Sir ,I can't figure it out where to use Arrays in this program.Therefore done with simple logic. 
	do{
		printf("Enter the ID: ");
	    scanf("%d",&id);
	    if(id>=1 && id<=100){
		printf("Enter the sales amount: ");
	    scanf("%f",&sal_amt);
	    if(sal_amt<50000){
	    	comm=sal_amt*(10/100);
		}
		else{
			exceeding=sal_amt-50000;
			comm=(50000*(10/100))+(exceeding*(15/100));
		}
		
		printf("Number\t\tAmount\t\tCommission\t\t\n\n========\t========\t========\n\n%d\t\t%.1f\t\t%.2f\n\n",id,sal_amt,comm);
		
	  	}
	}while(id>0);
	return 0;
	}
	
	

