#include<stdio.h>
int main(){
	printf("AMRITA and 125113019\n");
	int a;
	printf("Enter year: ");
	scanf("%d",&a);
	
    if(a%400==0){
	printf("%d is a leap year.",a);
    }
    else if(a%100==0){
	printf("%d is is not a leap year.",a);
    }
    else if(a%4==0){
	printf("%d is a leap year.",a);
    }
    else {
	printf("%d is not a leap year.",a);
    } 
	return 0;
}
