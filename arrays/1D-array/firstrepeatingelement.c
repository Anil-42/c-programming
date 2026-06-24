#include<stdio.h>
#include<stdlib.h>

 int max(int arr[],int n){
	
	int max=arr[0];
	for(int i=1;i<n;i++){
		if(arr[i]>max) max=arr[i];
	}
	return max;
}

int main(){
    int n;
    scanf("%d",&n);
    int *arr=(int *)calloc(n,sizeof(int));
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    // int minindex=-1;
    // for(int  i=0;i<n;i++){
    //     for(int j=i+1;j<n;j++){
    //         if(arr[i] == arr[j]){
    //             if(minindex==-1 || j<minindex){
    //                 minindex=j;
    //             }
    //             break;
    //         }
    //     }
    // }
    // (minindex!=-1) ? printf("%d",arr[minindex]) : printf("no repeating element");

	int m=max(arr,n) + 1;
	int *freq = (int *)calloc(m,sizeof(int));
    int found=0,i;

	for(i=0;i<n;i++){
		freq[arr[i]]++;
        if(freq[arr[i]]>1){
            found=1;
            break;
		}
	}
    (found) ? printf("%d",arr[i]) : printf("no repeating element");

    free(arr);
    free(freq);
    return 0;
}