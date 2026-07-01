#include <stdio.h>

void pyramid(int n){
     for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j>=n-i+1)
            printf("*");
            else printf(" ");
        }
        for(int j=1;j<n;j++){
            if(j<i)
            printf("*");
            else printf(" ");
        }
        printf("\n");
    }
}

void reversePyramid(int n){
    for(int i=1;i<=n;i++){
        for(int j=n;j>=1;j--){
            if(j<=n-i+1)printf("*");
            else printf(" ");
        }
        for(int j=n;j>1;j--){
            if(j>i)printf("*");
            else printf(" ");
        }

        printf("\n");
    }
}



int main()
{
    int n;
    scanf("%d",&n);
    pyramid(n);
    printf("\n");
    reversePyramid(n);
   

    return 0;
}