#include<stdio.h>
#include<stdlib.h>

int max(int arr[],int n){
	
	int max=arr[0];
	for(int i=1;i<n;i++){
		if(arr[i]>max) max=arr[i];
	}
	return max;
}

int main(){
    int n;
    scanf("%d",&n);
    int *arr = (int *)calloc(n,sizeof(int));
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int m=max(arr,n) + 1;
	int *freq = (int *)calloc(m,sizeof(int));
    int found=0,i;

	for(i=0;i<n;i++){
		freq[arr[i]]++;
	}

    for(int i=0;i<m;i++){
        if(freq[i]>1)printf("%d ",i);
    }

    return 0;
}