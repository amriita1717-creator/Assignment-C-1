#include<stdio.h>
int main(){
	printf("AMRITA and 125113019\n");
	int n,a,b=0;
	printf("Enter the number:");
	scanf("%d",&n);
	do{
		a=n%10;
		b=b*10+a;
		n=n/10;
	}while(n!=0);
	printf("The reversed number is:%d",b);
	
	return 0;
}
