#include<stdio.h>
#include<stdlib.h>
#define max(a,b) (((a) > (b))?(a):(b))

void maxsum(int *arr,int n,int k){
    if(k>n){
        int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
        printf("k is less than n sum of n elements is: %d",sum);
        return;
    }
    
    int sum=0;
    for(int i=0;i<k;i++){
        sum+=arr[i];
    }
    
    int maxsum=sum;
    for(int i=k;i<n;i++){
        sum+=arr[i] - arr[i-k];
        maxsum = max(maxsum,sum);
    }

    printf("%d",maxsum);
}

int main(){
    int n;
    scanf("%d",&n);
    int *arr = (int *)calloc(n,sizeof(int));
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int k;
    scanf("%d",&k);

    maxsum(arr,n,k);

    free(arr);

    return 0;
}