#include<stdio.h>
int main(){
	printf("AMRITA and 125113019\n");
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	int sum=0;
	for(int i=1;i<=n;i++){
		sum+=i;
	}
	printf("The sum is: %d",sum);
	
	
	return 0;
}
