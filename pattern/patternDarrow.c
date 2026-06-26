#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(j==(n/2+1) || i==(n/2)+j || i==n+(n/2+1)-j)
            printf("* ");
            else
            printf("  ");
        }
        printf("\n");
    }

    return 0;
}