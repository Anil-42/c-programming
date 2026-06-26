#include <stdio.h>
#include <stdbool.h>
#include <string.h>
bool palindrome(char *s){
    int l=0,r=strlen(s)-1;
    while(l<r){
        if(s[l]!=s[r])
        return false;
        l++;
        r--;
    }
    return true;

}
int main(){
    char *s;
    scanf("%s",s);
    if(palindrome(s))
    printf("palindrome");
    else
    printf("Not A Palidrome");
}
