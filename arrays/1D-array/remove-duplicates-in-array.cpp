#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	int i=0;
	for(int j=1;j<n;j++){
		if(arr[i]!=arr[j]){
			i++;
			int temp=arr[i];
			arr[i]=arr[j];			
			arr[j]=temp;
			}
	}
	for(int k=0;k<i+1;k++){
		printf("%d ",arr[k]);
	}
	return 0;
}
