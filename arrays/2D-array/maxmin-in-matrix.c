#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

void maxminmatrix(int **arr,int n){
    int max=INT_MIN;
    int min=INT_MAX;
    for(int r=0;r<n;r++){
        for(int c=0;c<n;c++){
            if(max<arr[r][c]){
                max=arr[r][c];
            }
            if(min>arr[r][c]){
                min=arr[r][c];
            }
        }
    }
    printf("max = %d, min = %d ",max,min);
}

int main(){
    int n;
    scanf("%d",&n);
    int **arr=(int **)calloc(n,sizeof(int *));
    for(int i=0;i<n;i++){
        *(arr+i)=(int *)calloc(n,sizeof(int));
    }
     for(int r=0;r<n;r++){
        for(int c=0;c<n;c++){
            scanf("%d",&arr[r][c]);
        }
    }
    maxminmatrix(arr,n);

    for(int i=0;i<n;i++){
        free(arr[i]);
    }
    free(arr);

    return 0;
}