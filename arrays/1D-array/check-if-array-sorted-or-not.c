#include<stdio.h>
#include<stdbool.h>

int main(){
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	bool f=false;
	for(int i=0;i<n-1;i++){
		if(arr[i+1]<arr[i]) {
			f=true;
			break;
		}
	}
	if(f)printf("NO");
	else printf("Yes");
	
	return 0;
}
