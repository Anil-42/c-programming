#include<stdio.h>
#include<stdlib.h>

int main(){
    int m;
    scanf("%d",&m);
    int *arr = (int *)calloc(m,sizeof(int));
    for(int i=0;i<m;i++){
        scanf("%d",&arr[i]);
    }
    

    //not correct for few cases
    // int *res = (int *)calloc(m,sizeof(int));
    // int pos=0,neg=1;
    // for(int i=0;i<m;i++){
    //     if(arr[i]>=0 && pos<m){
    //         res[pos]=arr[i];
    //         pos+=2;
    //     }
    //     else if(arr[i]<0 && neg<m){
    //         res[neg]=arr[i];
    //         neg+=2;
    //     }
    // }
    // for(int i=0;i<m;i++){
    //     printf("%d ",res[i]);
    // }


    int *a = (int *)calloc(m,sizeof(int));
    int *b = (int *)calloc(m,sizeof(int));
    int p=0,n=0;
    for(int i=0;i<m;i++){
        if(arr[i]<0) b[n++]=arr[i];
        else a[p++]=arr[i];
    }
    int i=0,j=0;
    while(i<p && j<n){
        printf("%d ",a[i++]);
        printf("%d ",b[j++]);
    }
    while(i<p)printf("%d ",a[i++]);
    while(j<n)printf("%d ",b[j++]);
    
    free(arr);
    return 0;
}