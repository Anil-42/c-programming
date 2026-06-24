#include<stdio.h>
#include<string.h>

int strlength(char *s){
    int i;
    for(i=0;s[i]!='\0';i++);
    return i;
}

int strnlength(char *s,int n){
    int i;
    for(i=0;i<n && s[i]!='\0';i++);
    return i;
}


int main(){
    //strlength
    char *s;
    scanf("%[^\n]",s);
    printf("%d\n",strlength(s)); 
    printf("%d",strnlength(s,5)); 

    printf("\n%d",strlen(s));
    printf(" %d",strnlen(s,5));

    return 0;
}