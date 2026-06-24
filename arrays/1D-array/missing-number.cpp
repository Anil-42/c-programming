#include<stdio.h>

int main(){
	int n;
	scanf("%d",&n);
	int v;
	int sum=0;
	for(int i=0;i<n-1;i++){
		scanf("%d",&v);
		sum+=v;
	}
	int res= (n*(n+1)/2) - sum;
	printf("%d",res);
		
	return 0;
}
