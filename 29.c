#include<stdio.h>
int main(){
    char str[10];
    scanf("%s",str);
    int sum = 0;
    int abc[26] = {10,11,12,13,14,15,16,17,34,18,19,20,21,22,35,23,24,25,26,27,28,29,32,30,31,33};
    int x = abc[str[0]-'A'];
    sum += (x/10) + (x%10)*9;
    for(int i = 1; i < 9; i++){
        sum += (8-i+1)*(str[i]-'0');
    }
    sum += str[9]-'0';
    if(sum%10) printf("WRONG!!!\n");
    else printf("CORRECT!!!\n");
    return 0;
}