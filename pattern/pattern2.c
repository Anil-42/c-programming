#include <stdio.h>

int main()
{
    int n,sum=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if((i==n-j+1) || i==j || i==1 || i==n || j==1 || j==n){
                if(j==n)
                    printf("*");
                else         
                printf("* ");
                
            }
            else printf("  ");
        }
        printf("\n");
    }

    return 0;
}