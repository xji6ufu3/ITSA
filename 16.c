#include<stdio.h>
#include<string.h>
int main(){
    char str1[135], str2[515];
    scanf("%s%s",str1,str2);
    int check, time = 0;
    for(int i = 0; i < strlen(str2)-strlen(str1)+1; i++){
        check = 1;
        for(int j = 0; j < strlen(str1); j++){
            if(str1[j] != str2[i+j]){
                check = 0;
                break;
            }
        }
        if(check) time++;
    }
    printf("%d\n",time);
    return 0;
}