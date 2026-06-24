#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    scanf("%d",&n);
    int *arr=(int *)calloc(n,sizeof(int));
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int cur_sum=arr[0];
    int max_sum=arr[0];

    for(int i=1;i<n;i++){
        if(arr[i] > cur_sum*arr[i]){
            cur_sum = arr[i];
        }
        else{
            cur_sum = cur_sum*arr[i];
        }
        if(cur_sum>max_sum)max_sum=cur_sum;
    }
    printf("%d",max_sum);

    free(arr);
    return 0;
}