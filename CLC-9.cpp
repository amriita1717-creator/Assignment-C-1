#include<stdio.h>
int main(){
	printf("AMRITA and 125113019\n");
	int n,r,c,s=0;
	printf("Enter a number: ");
	scanf("%d",&n);
    c=n;
    while(n>0){
    	r=n%10;
    	s=r+(s*10);
    	n=n/10;
	}
	if(c==s)printf("%d is a palindrome number.",c);
	else printf("%d is not a palindrome nummber",c);
	return 0;

}
