#include<stdio.h>
int main(){
	printf("AMRITA and 125113019\n");
	int arr[7]={1,2,3,4,5,6,7};
	int sum=0;
	for(int i=0;i<=6;i++){
		sum+=arr[i];
	}
	printf("The sum of array elements is:%d\n",sum);
	printf("The average of array elements is:%d",sum/7);
	
	return 0;
}
