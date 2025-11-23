#include<stdio.h>
int main(){
	printf("AMRITA and 125113019\n");
	int arr[7]={3,7,56,90,3,1,87};
	int max=3;
	for(int i=0;i<=6;i++){
		
		if(max<arr[i]){
			max=arr[i];
	}
    }
     printf("The maximum number in the array is:%d",max);
	
	return 0;
}
