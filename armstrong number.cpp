#include <stdio.h>
#include<math.h>

int main()
{
    int n,temp,sum=0,c=0;
    scanf("%d",&n);
    temp=n;
    while(temp!=0){
        c++;
        temp/=10;
    }
    temp=n;
    while(temp!=0){
        sum+=pow(temp%10,c);
        temp/=10;
    }
    if(sum==n)printf("Armstrong number");
    else printf("Not an Armstrong number");

    return 0;
}
