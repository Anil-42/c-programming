#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);	
		}
//	int i=0;
//	for(int j=1;j<n;j++){
//		if(arr[i]==0 && arr[j]!=0){
//			int temp=arr[i];
//			arr[i++]=arr[j];
//			arr[j]=temp;
//		}
//		else if(arr[i]!=0)i++;	}
	int count=0;
	for(int i=0;i<n;i++){
		if(arr[i]!=0){
			arr[count++] = arr[i];
		}
	}	
	while(count<n){
		arr[count++]=0;
	}
	
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);	
		}


		
	return 0;
	}
