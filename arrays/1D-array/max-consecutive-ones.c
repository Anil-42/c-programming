#include<stdio.h>
#include<stdlib.h>
#define max(a,b) (((a) > (b)) ? (a) : (b))

int main(){
    int n;
    scanf("%d",&n);
    int *arr = (int *)calloc(n,sizeof(int));
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int count=0,maxcount=0;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            count++;
            maxcount = max(maxcount,count);
        }
        else{
            count=0;
        }
    }
    (count) ? printf("%d",maxcount) : printf("no ones found");

    free(arr);

    return 0;
}