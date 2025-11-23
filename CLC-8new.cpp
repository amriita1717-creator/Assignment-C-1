#include<stdio.h>
int main(){
	printf("AMRITA and 125113019\n");
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	int fact=1;
	for(int i=1;i<=n;i++){
		fact*=i;
	}
	printf("The factorial of %d is %d: ",n,fact);
    return 0;
}
