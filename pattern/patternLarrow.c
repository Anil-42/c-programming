#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==(n/2+1) || j==i-(n/2) || i==(n/2+1)-j+1)
            printf("* ");
            else
            printf("  ");
        }
        printf("\n");
    }

    return 0;
}