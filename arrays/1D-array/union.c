#include<stdio.h>
#include<stdlib.h>

int compare(const void *a, const void *b){
    int val_a = *(const int *)a;
    int val_b = *(const int *)b;
    
	return (val_a>val_b) - (val_a<val_b);
}

void findunion(int *arr1,int n,int *arr2,int m){
    int i=0,j=0;
    int lastprinted,is_first=1;
    while(i<n && j<m){
        int current;
        if(arr1[i]==arr2[j]){
            current=arr1[i];
            i++;
            j++;
        }
        else if(arr1[i]<arr2[j]){
            current=arr1[i];
            i++;
        }
        else{
            current=arr2[j];
            j++;
        }
        if(is_first || current!=lastprinted){
            printf("%d ",current);
            lastprinted=current;
            is_first=0;
        }
    }
    while(i<n){
        if(is_first || arr1[i]!=lastprinted){
            printf("%d ",arr1[i]);
            lastprinted=arr1[i];
            is_first=0;
        }
        i++;
    }
    while(j<m){
        if(is_first || arr2[j]!=lastprinted){
            printf("%d ",arr2[j]);
            lastprinted=arr2[j];
            is_first=0;
        }
        j++;
    }
}

int main(){
    int n;
    printf("enter no.of elements: ");
    scanf("%d",&n);
    int *arr1 = (int *)calloc(n,sizeof(int));
    printf("enter %d elements: ",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr1[i]);
    }

    while (getchar() != '\n');

    int m;
    printf("enter no.of elements: ");
    scanf("%d",&m);
    int *arr2 = (int *)calloc(m,sizeof(int));
    printf("enter %d elements: ",m);
    for(int i=0;i<m;i++){
        scanf("%d",&arr2[i]);
    }

    while (getchar() != '\n');
     
    qsort(arr1,n,sizeof(int),compare);
    qsort(arr2,m,sizeof(int),compare);

    findunion(arr1,n,arr2,m);
    
    free(arr1);
    free(arr2);

    return 0;
}