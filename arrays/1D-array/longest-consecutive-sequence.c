#include<stdio.h>
#include<stdlib.h>

int compare(const void *a, const void *b){
    int val_a = *(const int *)a;
    int val_b = *(const int *)b;
    return (val_a > val_b) - (val_a < val_b);
}

int max(int n1, int n2){
    return (n1>n2 ? n1 :n2);
}

int main(){
     int n;
     scanf("%d",&n);
     int arr[n];
     for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
     }
     qsort(arr, n, sizeof(int), compare);
     int count=1,mcount=0;
     for(int i=1;i<n;i++){
        if(arr[i]-arr[i-1] == 1){
            count+=1;
            mcount = max(mcount,count);
        }
        else count=1;
     }
     printf("%d",mcount);

    return 0;
}
