#include<stdio.h>
#include<stdlib.h>

int compare(const void *a, const void *b){
    int val_a = *(const int *)a;
    int val_b = *(const int *)b;

    return (val_a>val_b) - (val_a<val_b);
}

int solve(int *arr, int n){
    qsort(arr,n,sizeof(int),compare);
    int target=1;
    for(int i=0;i<n;i++){
        if(arr[i]>0 && arr[i]==arr[i-1])
        continue;
        if(arr[i]==target)
        target++;
     }
     return target;
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