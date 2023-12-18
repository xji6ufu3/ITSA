#include<stdio.h>
#include<string.h>
int main(){
    int a[26] = {0};
    char str[105];
    gets(str);
    int white = 0;
    for(int i = 0; i < strlen(str); i++){
        if(str[i] == ' ') white++;
        else if('A' <= str[i] && str[i] <= 'Z') str[i] += 'a'-'A';
        if('a' <= str[i] && str[i] <= 'z') a[str[i]-'a']++;
    }
    printf("%d\n",white+1);
    for(int i = 0; i < 26; i++){
        if(a[i]){
            printf("%c : %d\n", i+'a', a[i]);
        }
    }
    return 0;
}