#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int mul=1;
	for(int i=0;i<n;i++){
		mul*=arr[i];
	}
	for(int i=0;i<n;i++){
		printf("%d ",(mul/arr[i]));
	}
	
	return 0;
}
