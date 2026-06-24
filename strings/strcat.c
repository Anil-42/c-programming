#include<stdio.h>
#include<string.h>

char* strconcatenate(char *s1,char *s2){
    int i;
    for(i=0;s1[i]!='\0';i++);
    int j,k=0;
    for(j=i;s2[k]!='\0';j++){
        s1[j]=s2[k++];
    }
    s1[j]='\0';
    return s1;
}

char* strnconcatenate(char *s1,char *s2,int n){
    int i;
    for(i=0;s1[i]!='\0';i++);
    int j,k=0;
    for(j=i;k<n && s2[k]!='\0';j++){
        s1[j]=s2[k++];
    }
    s1[j]='\0';
    return s1;
}

int main(){
    char s1[501]="Hello ";
    char *s2="world";
    // printf("%s\n",strcat(s1,s2));
    // printf("%s\n",strncat(s1,s2,2));

    printf("%s\n",strconcatenate(s1,s2));
    printf("%s",strnconcatenate(s1,s2,2));

    return 0;
}