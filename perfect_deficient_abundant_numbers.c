#include <stdio.h>
#include<math.h>

int main()
{
    int n,count=0;
    scanf("%d",&n);
    for(int i=1;i<n;i++){
        if(n%i==0)count+=i;
    }
    if(count==n)
    printf("perfect number");
    else if(count>n)printf("abundant number");
    else printf("deficient number");

    return 0;
}
