#include <stdio.h>
#include<limits.h>

void check(int arr[], int n, int m){
    if(n==0){
        if(arr[n]>m)printf("%d ",arr[n]);
        return;
    }

     check(arr, n-1, (arr[n]>m) ? arr[n] : m);
     if(arr[n]>m){
         m=arr[n];
        printf("%d ",m);
    }
}

int main(){
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
	scanf("%d",&arr[i]);
	}
	int m=INT_MIN;
//	int res[n],l=0;
//	for(int i=n-1;i>=0;i--){
//		if(arr[i]>m){
//			m=arr[i];
//			res[l++]=arr[i];
//		}
//	}
//	for(int i=l-1;i>=0;i--){
//		printf("%d ",res[i]);
//	}

	check(arr, n-1, m);


	return 0;
}
