#include<stdio.h>
int main(){
	printf("AMRITA and 125113019\n");
	int a,b,c;
	printf("Enter a: ");
	scanf("%d",&a);
	printf("Enter b: ");
	scanf("%d",&b);
	printf("Enter c: ");
	scanf("%d",&c);
	if(a>b){
		if(a>c)printf("%d is the largest",a);
		else printf("%d is largest",c);
	}
	else{
	if(b>c) printf("%d is largest",b);
	else printf("%d is largest.",c);
    }
	return 0;
}
