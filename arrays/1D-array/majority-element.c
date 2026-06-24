#include<stdio.h>
#include<stdlib.h>

int compare(const void *a, const void *b){
    int val_a = *(const int *)a;
    int val_b = *(const int *)b;
    
	return (val_a>val_b) - (val_a<val_b);
}

int main(){
    int n;
    scanf("%d",&n);
    int *arr = (int *)calloc(n,sizeof(int));
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

     qsort(arr, n, sizeof(int),compare);
	
	int count=1;
	for(int i=1;i<=n;i++){
	    if(arr[i]==arr[i-1])count++;
	    else{
	        count=1;
	    }
        if(count > n/2){
            printf("%d",arr[i]);
            break;
        }
	}
    free(arr);

    return 0;
}