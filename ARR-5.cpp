#include<stdio.h>
int main(){
	printf("AMRITA and 125113019\n");
	int a[100],b[100],c[200];
	int n1,n2;
	printf("Enter the size of a: ");
	scanf("%d",&n1);
	printf("The %d elements of a is:",n1);
	for(int i=0;i<n1;i++){
		scanf("%d",&a[i]);
	}
	printf("Enter the size of b: ");
	scanf("%d",&n2);
	printf("The %d elements of b is:",n2);
	for(int i=0;i<n2;i++){
		scanf("%d",&b[i]);
	}
	for(int i=0;i<n1;i++)c[i]=a[i];
	for(int j=0;j<n2;j++)c[n1+j]=b[j];
	printf("Merged array is:\n");
	for(int i=0;i<n1+n2;i++){
		printf("%d ",c[i]);
	}
	return 0;
}
