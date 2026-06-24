#include<stdio.h>

void reverse(int arr[], int s, int e) {
    while (s < e) {
        int temp = arr[s];
        arr[s] = arr[e];
        arr[e] = temp;
        s++;
        
        
        e--;
    }
}

int main(){
	int n,k;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	scanf("%d",&k);
	// right-rotate
//	for(int i=0;i<k;i++){
//		int safe=arr[n-1];
//		for(int j=n-1;j>0;j--){
//			arr[j]=arr[j-1];
//		}
//	arr[0]=safe;
//	}

	//left-rotate
//	for(int i=0;i<k;i++){
//		int safe=arr[0];
//		for(int j=0;j<n-1;j++){
//			arr[j]=arr[j+1];
//		}
//		arr[n-1]=safe;
//	}	

	reverse(arr, 0, n-1);
	reverse(arr, 0, k-1);
	reverse(arr, k, n-1);
	
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	
	
	return 0;
}
