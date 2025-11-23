#include<stdio.h>
int main(){
	printf("AMRITA and 125113019\n");
	int arr[100],n,i,j,count;
	int visited[100]={0};
	printf("Enter size of array: ");
	scanf("%d",&n);
	printf("Enter %d elements: ",n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("Frequency of each element is: \n");
	for(i=0;i<n;i++){
		if(visited[i]==1)
		continue;
		count=1;
		for(j=i+1;j<n;j++){
			if (arr[i]==arr[j]){
				count++;
				visited[j]=1;
			}
		}
		printf("%d occurs %d times\n",arr[i],count);
	}
	return 0;
}
