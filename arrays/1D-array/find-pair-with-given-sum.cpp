#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int compare(const void *a, const void *b){
	int val_a = *(const int *)a;
	int val_b = *(const int * )b;
	return (val_a > val_b) - (val_a < val_b);
}

int main(){
	int n,k;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	scanf("%d",&k);
	qsort(arr, n, sizeof(int), compare);
	int i=0,j=n-1;
	bool f = false;
	while(i<j){
		if((arr[i] + arr[j]) == k){
			f=true;
			break;
		}
		else if(arr[i]+arr[j] < k) i++;
		else j--;
	}
	f == true ? printf("YES") : printf("NO");
	return 0;
}
