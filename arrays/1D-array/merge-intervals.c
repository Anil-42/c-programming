#include<stdio.h>
#include<stdlib.h>

int compare(const void *a, const void *b){
   const int *row_a = (const int *)a;
   const int *row_b = (const int *)b;

    return (row_a[0] - row_b[0]);
}

void solve(int arr[][2], int n){
    qsort(arr, n, sizeof(arr[0]), compare);
   
    int index=0;
    for(int i=1;i<n;i++){
        if(arr[index][1]>=arr[i][0]){
            if(arr[index][1]<arr[i][1])
                arr[index][1]=arr[i][1];
        }
        else{
            index++;
            arr[index][0]=arr[i][0];
            arr[index][1]=arr[i][1];
        }
    }
    for(int i=0;i<=index;i++){
        printf("%d %d ", arr[i][0],arr[i][1]);
    }

}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n][2];
    for(int i=0;i<n;i++){
        scanf("%d %d",&arr[i][0],&arr[i][1]);
    }
    solve(arr,n);

    return 0;
}