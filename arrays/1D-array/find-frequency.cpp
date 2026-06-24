#include<stdio.h>
#include<stdlib.h>

//int max(int arr[],int n){
//	
//	int max=arr[0];
//	for(int i=1;i<n;i++){
//		if(arr[i]>max) max=arr[i];
//	}
//	return max;
//}

int compare(const void *a, const void *b){
    
	return (*(int *)a - *(int *)b);
}

int main(){
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
//	int m=max(arr,n) + 1;
//	int freq[m];
//	for(int i=0;i<m;i++){
//		freq[i]=0;
//	}
//	for(int i=0;i<n;i++){
//		freq[arr[i]]++;
//	}
//	for(int i=0;i<m;i++){
//		if(freq[i]!=0){
//			printf("%d -> %d ",i,freq[i]);
//		}
//	}

   qsort(arr, n, sizeof(int),compare);
	
	int count=1;
	for(int i=1;i<=n;i++){
	    if(arr[i]==arr[i-1])count++;
	    else{
	        printf("%d -> %d\n",arr[i-1],count);
	        count=1;
	    } 
	}
	
	return 0;
}
