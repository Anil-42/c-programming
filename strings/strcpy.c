#include<stdio.h>
#include<string.h>

char* strcopy(char d[20],char *s){
    int i;
    for(i=0;s[i]!='\0';i++);
    int j;
    for(j=0;j<i;j++){
        d[j]=s[j];
    }
    d[j]='\0';
    return d;
}

char* strncopy(char d[20],char *s,int n){
    int j;
    for(j=0;j<n;j++){
        d[j]=s[j];
    }
    d[j]='\0';
    return d;
}

int main(){
    char *s="arulkumaran";
    char d1[20];
    char d2[20];

    // printf("%s",strcpy(d1,s));
    // printf(" %s",strncpy(d2,s,5));

    printf("%s\n",strcopy(d1,s));
    printf("%s",strncopy(d2,s,5));



    return 0;
}