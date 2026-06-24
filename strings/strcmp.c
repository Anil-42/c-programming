#include<stdio.h>
#include<string.h>

int strcompare(char *s1, char* s2){
    int i=0;
    for(i=0;(i<s1[i] || i<s2[i]);i++){
        if(s1[i]<s2[i]){
            printf("%d-",s1[i]-s2[i]);
            return -1;
        }
        else if(s1[i]>s2[i]){
            printf("%d-",s1[i]-s2[i]);
            return 1;
        }
    }
    printf("%d-",s1[i]-s2[i]);
    return 0;
}
int strncompare(char *s1, char* s2,int n){
    int i=0;
    for(i=0;i<n && (s1[i]!='\0' || s2[i]!='\0');i++){
        if(s1[i]<s2[i]){
            printf("%d-",s1[i]-s2[i]);
            return -1;
        }
        else if(s1[i]>s2[i]){
            printf("%d-",s1[i]-s2[i]);
            return 1;
        }
    }
    printf("%d-",s1[i]-s2[i]);
    return 0;
}

int main(){
    //strcmp strncmp
    char *s1, *s2;
    scanf("%[^\n] %[^\n]",s1,s2);

    printf("%d ",strcmp(s1,s2));
    printf("%d\n",strncmp(s1,s2,7));

    printf("%d\n",strcompare(s1,s2));
    printf("%d",strncompare(s1,s2,7));

    return 0;
}