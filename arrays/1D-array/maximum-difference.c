#include<stdio.h>
#include<limits.h>

int max(int n1, int n2){
    return (n1>n2 ? n1 :n2);
}
int min(int n1, int n2){
    return (n1<n2 ? n1 :n2);
}

int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    // int s=INT_MAX,l=INT_MIN;
    // for(int i=n-1;i>=0;i--){
    //     if(arr[i]>l && i!=0){
    //         l=arr[i];
    //         s=INT_MAX;
    //     }
    //     else if(arr[i]<l && (s==INT_MAX || arr[i]<s)){
    //         s=arr[i];
    //     }
    // }
    // if(s!=INT_MAX && l!=INT_MIN) printf("%d",l-s);
    // else printf("No maximum difference exist");

    int minele=arr[0];
    int maxdif=0;
    for(int i=1;i<n;i++){
        if(arr[i]>minele){
            maxdif=max(maxdif, arr[i]-minele);
        }
        minele=min(minele,arr[i]);
    }
    printf("%d",maxdif);

    return 0;
}