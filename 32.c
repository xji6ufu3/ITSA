#include<stdio.h>
#include<string.h>
int main(){
    char str[105], c;
    int n;
    gets(str);
    scanf("%d",&n);
    for(int i = 0; i < strlen(str); i++){
        if(('a' <= str[i] && str[i] <= 'z') || ('A' <= str[i] && str[i] <= 'Z') || ('0' <= str[i] && str[i] <= '9')){
            if('a' <= str[i] && str[i] <= 'z')
                str[i] = (str[i]-'a'+n)%26+'a';
            else if('A' <= str[i] && str[i] <= 'Z')
                str[i] = (str[i]-'A'+n)%26+'A';
            else
                str[i] = (str[i]-'0'+n)%10+'0';
        }
    }
    printf("%s\n",str);
    return 0;
}