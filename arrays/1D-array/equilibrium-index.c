#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int totalsum=0,leftsum=0;
    for(int i=0;i<n;i++){
        totalsum+=arr[i];
    }
    for(int i=0;i<n;i++){
        int rightsum = totalsum - leftsum - arr[i];
        if(leftsum == rightsum){
            printf("%d",i);
            break;
        }
        leftsum+=arr[i];
    }
    
    return 0;
}