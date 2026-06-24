#include <stdio.h>
#include<limits.h>

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int max1=arr[0],max2=INT_MIN;
    for(int i=1;i<n;i++){
        if(arr[i]>max1){
            max2=max1;
            max1=arr[i];
        }
        
    }
    printf("%d",max2); 
    

    return 0;
}

