#include<stdio.h>
#include<stdlib.h>

void colsum(int **arr,int n){
    for(int c=0;c<n;c++){
        int sum=0;
        for(int r=0;r<n;r++){
            sum+=arr[r][c];
        }
        printf("%d ",sum);
    }
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
    colsum(arr,n);

    for(int i=0;i<n;i++){
        free(arr[i]);
    }
    free(arr);

    return 0;
}