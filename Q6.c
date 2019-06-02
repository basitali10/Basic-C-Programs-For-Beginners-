#include<stdio.h>
#include<math.h>

int BinToDec(unsigned long long x);

int main () {
	unsigned long long bin;
	int ans;
	do{
		printf("Enter the binary number and when you are done type(-1)   : ");
	scanf("%llu",&bin);
	if(bin!=-1){
		ans=BinToDec(bin);
	printf("\n\nThe decimal equivalent of %lluB is : %lluD\n\n\n",bin,ans);
	}
	}
	while(bin!=-1);
	printf("\n\nProgram ended gracefully.\n\n");
	return 0;
}

int BinToDec(unsigned long long x){
	int i=0,sum=0,digit;
	while(x!=0){
		digit=x%10;
		sum=sum+(digit*pow(2,i));
		x=x/10;
		i++;
	}
	return sum;
}
