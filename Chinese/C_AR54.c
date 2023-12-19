#include<stdio.h>  
#include<string.h>
int main(){  
    int n;
    scanf("%d\n",&n);
    int a[26] = {0};
    char c[5];
    while(n--){
        scanf("%s",c);
        a[c[0]-'a']++;
    }
    for(int i = 0; i < 26; i++){
        if(a[i]) printf("%c %d\n",'a'+i, a[i]);
    }
}  