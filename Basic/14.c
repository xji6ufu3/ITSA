#include<stdio.h>
#include<string.h>
int main(){
    char str1[100], str2[100];
    scanf("%s",str1);
    int yes = 1;
    for(int i = strlen(str1)-1; i >= 0 ; i--) str2[strlen(str1)-1-i] = str1[i];
    for(int i = 0; i < strlen(str1); i++){
        if(str1[i] != str2[i]){
            yes = 0;
            break;
        }
    }
    if(yes) printf("YES\n");
    else printf("NO\n");
    return 0;
}
