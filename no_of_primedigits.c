#include <stdio.h>
#include <stdbool.h>
bool isprime(int x){
    if(2>x)
    return false;
    for(int i=2;i<x;i++){
        if(x%i==0)
        return false;
    }
    return true;
}
int main()
{
    int n,count=0;
    scanf("%d",&n);
    int temp=n;
    while(temp>0){
        if(isprime(temp%10)){
        count++;
        printf("%d is prime \n",temp%10);
        }
        temp/=10;
    }
    printf("total prime digits is %d",count);
    return 0;
}
