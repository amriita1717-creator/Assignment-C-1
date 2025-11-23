#include<stdio.h>
int main(){
	printf("AMRITA and 125113019\n");
	int a,b,A;
	printf("Enter a: ");
	scanf("%d",&a);
	printf("Enter b: ");
	scanf("%d",&b);
	printf("Enter A: ");
	scanf("%d",&A);
	switch(A){
		case 1:printf("Addition is:%d",a+b);
		break;
		case 2:printf("Subtraction is:%d",a-b);
		break;
		case 3:printf("Product is:%d",a*b);
		break;
		case 4:printf("Division is:%d",a/b);
		break;
		default:printf("Invalid operation....");
	}
	return 0;
}
