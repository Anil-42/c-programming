#include <stdio.h>

int main()
{
    int n,sum=0;
    scanf("%d",&n);
    while(n>=10){
        while(n>0){
            sum+=n%10;
            n/=10;
        }
        n=sum;
    }
    
    if(n==7)printf("%d is a magic number",n);
    else printf("%d is not a magic number",n);

    return 0;
}
