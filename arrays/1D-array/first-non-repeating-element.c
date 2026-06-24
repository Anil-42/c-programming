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

    // int found=0;
    // for(int  i=0;i<n;i++){
    //     int isrepeating=0;
    //     for(int j=0;j<n;j++){
    //         if(i!=j && arr[i] == arr[j]){
    //             isrepeating=1;
    //             break;
    //         }
    //     }
    //     if(!isrepeating){
    //         printf("%d",arr[i]);
    //         found=1;
    //         break;
    //     } 
    // }
    // if(!found)printf("all are repeating elements");
    

	int m=max(arr,n) + 1;
	int *freq = (int *)calloc(m,sizeof(int));
    int found=0,i;

	for(i=0;i<n;i++){
		freq[arr[i]]++;
	}

    for(i=0;i<n;i++){
		if(freq[arr[i]]==1){
            found=1;
            break;
		}
	}
    
    (found) ? printf("%d",arr[i]) : printf("all are repeating elements");

    free(freq);
    free(arr);
    return 0;
}