#include <stdio.h>

void revpyramid(int n){
for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        if(j<=n-i)
        printf(" ");
        else printf("*");
    }
    printf("\n");
}
    for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        if(j<=i)
        printf(" ");
        else printf("*");
    }
    printf("\n");
    
}
}

void pyramid(int n){
    for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
        if(j<=i)
        printf("*");
        else printf(" ");
    }
    printf("\n");
}
for(int i=1;i<n;i++){
    for(int j=1;j<n;j++){
        if(j<n-i+1)
        printf("*");
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
revpyramid(n);
return 0;
}
