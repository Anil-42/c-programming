#include <stdio.h>
#include <string.h>
char* reverse(char *s){
    int r=strlen(s)-1,l=0;
    while(l<=r){
        char ch=s[l];
        s[l]=s[r];
        s[r]=ch;
        l++;
        r--;
    }
    return s;
}
int main(){
    char *s;
    scanf("%s",s);
    printf("%s",reverse(s));
    return 0;

}