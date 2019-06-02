#include <stdio.h>
int main () {
	char degree=248;
	float temp[7],con_temp,sum=0,avg;
	int i,j,k=1,l=1;
	for(i=0;i<7;i++){
		printf("Enter the temperautre on day %d in degree centigrade: ",k);
		scanf("%f",&temp[i]);
		if(i!=0){
			while((temp[i]-temp[i-1])>5 || (temp[i-1]-temp[i])>5)
			if((temp[i]-temp[i-1])>5 || (temp[i-1]-temp[i])>5 ){
			printf("Temperature does not seem correct, Enter another value: ");
			scanf("%f",&temp[i]);
			
			
			}
		}
		k++;
	}
	
	printf("\n\n");
	
	for(j=0;j<7;j++){
		con_temp=1.8*temp[j]+32;
		printf("The temperature in fahrenheit on day %d is: %.1f %cF \n",l,con_temp,degree);
		sum+=temp[j];
		l++;
		}
		avg=sum/7;
		avg=avg*1.8+32;
		printf("The temperature on 8th day is : %.1f %cF ",avg,degree);
		return 0;
		}
	
	
		
		
	
	
	
	
	
