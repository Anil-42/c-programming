#include<stdio.h>
#include<stdlib.h>

int solve(int *arr, int n){
    for(int i=1;i<n-1;i++){
        if(arr[i]>arr[i-1] && arr[i]> arr[i+1]){
            return arr[i];
        }
    }
    return 0;
}

int main(){
    int n;
    scanf("%d",&n);
    int *arr = (int *)calloc(n,sizeof(int));
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("%d",solve(arr,n));

    free(arr);

    return 0;
}