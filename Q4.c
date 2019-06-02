#include<stdio.h>
#include <math.h>
int size=10;
double mean(int array[],int size);
double median(int array[],int size);
void mod(int array[],int size);
double variancesample(int array[],int size);
int range(int array[],int size);
double variancepopulation(int array[],int size);
double standarddeviation(int array[],int size);

int main () {
	int num[size],i,k;
	double ans;
	for(i=0;i<size;i++){
		printf("Enter the integer no %d : ",i+1);
		scanf("%d",&num[i]);
	}
	printf("\n\nFor Range (1)\nFor Mean (2)\nFor Median (3)\nFor Mode (4)\nFor Variance(sample type) (5)\nFor Variance(population type) (6)\nFor Standard Deviation (7)\n");
	scanf("%d",&k);
	switch (k){
		case 1:
			ans=range(num,size);
			printf("\n\nThe range of the elements of the array is : %.1lf ",ans);
			break;
		case 2:
			ans=mean(num,size);
			printf("\n\nThe mean of the elements of the array is : %.1lf ",ans);
			break;
		case 3:
			ans=median(num,size);
			printf("\n\nThe median of the elements of the array is : %.1lf ",ans);
			break;
		case 4:
			mod(num,size);
			break;
		case 5:
			ans=variancesample(num,size);
			printf("\n\nThe variance (sample type) of the elements of the array is : %.1lf ",ans);
			break;
		case 6:
			ans=variancepopulation(num,size);
			printf("\n\nThe variance (population type) of the elements of the array is : %.1lf ",ans);
			break;
		case 7:	
		ans=standarddeviation(num,size);
			printf("\n\nThe standard deviation of the elements of the array is : %.1lf ",ans);
			break;
		default:
			printf("\n\nWrong type   Try again.");
	}
	printf("\n\nProgram ended gracefully.\n\n");
	return 0;
}

int range(int array[],int size){
	int i,maxi=0,mini=999999,range;
	for(i=0;i<size;i++){
		if(maxi<array[i]){
			maxi=array[i];
		}
		if(mini>array[i]){
			mini=array[i];
		}
		}
		range=maxi-mini;
		return range;
}

double mean(int array[],int size){
	double sum=0,mean;
	int i;
	for(i=0;i<size;i++){
		sum+=array[i];
		mean=sum/10;
		}
		return mean;
}

double median(int array[],int size){
	double median;
	median=(array[4]+array[5])/2;
	return median;
}

void mod(int array[],int size){
	int i,j,mod=0,repeat,k;
	for(i=0;i<size;i++){
		mod=0;
		for(j=i+1;j<size;j++){
			if(array[i]==array[j]){
			mod+=1;
			}
		}
		if(mod==1){
			printf("\nThe mode is %d ",array[i]);
		}
}
}

double variancesample(int array[],int size){
	double sum=0,mean,indi_square,variance,ans;
	int i,j;
	for(j=0;j<size;j++){
		sum+=array[j];
		mean=sum/10;
		}
	
	for(i=0;i<size;i++){
		indi_square=pow((array[i]-mean),2);
		ans+=indi_square;
		}
	variance=ans/9;
	return variance;
}

double variancepopulation(int array[],int size){
	double sum=0,mean,indi_square,variance,ans;
	int i,j;
	for(j=0;j<size;j++){
		sum+=array[j];
		mean=sum/10;
		}
	
	for(i=0;i<size;i++){
		indi_square=pow((array[i]-mean),2);
		ans+=indi_square;
		}
	variance=ans/10;
	return variance;
}

double standarddeviation(int array[],int size){
	double sum=0,mean,indi_square,variance,ans,standard_deviation;
	int i,j;
	for(j=0;j<size;j++){
		sum+=array[j];
		mean=sum/10;
		}
	
	for(i=0;i<size;i++){
		indi_square=pow((array[i]-mean),2);
		ans+=indi_square;
		}
	variance=ans/10;
	standard_deviation=sqrt(variance);
	return standard_deviation;
}
