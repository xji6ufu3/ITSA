#include<stdio.h>  
#include<string.h>
int main(){  
    char str[4][10], tmp[10];
    for(int i = 0; i < 4; i++) scanf("%s",str[i]);
    int n;
    int p[7];
    for(int i = 0; i < 7; i++) p[i] = 0;
    scanf("%d",&n);
    while(n--){
        scanf("%s",tmp);
        if(!strcmp(tmp, str[0])) p[0]++;
        else if(!strcmp(tmp, str[1]) || !strcmp(tmp, str[2]) || !strcmp(tmp, str[3])) p[1]++;
        else if(!strcmp(tmp+1, str[1]+1) || !strcmp(tmp+1, str[2]+1) || !strcmp(tmp+1, str[3]+1)) p[2]++;
        else if(!strcmp(tmp+2, str[1]+2) || !strcmp(tmp+2, str[2]+2) || !strcmp(tmp+2, str[3]+2)) p[3]++;
        else if(!strcmp(tmp+3, str[1]+3) || !strcmp(tmp+3, str[2]+3) || !strcmp(tmp+3, str[3]+3)) p[4]++;
        else if(!strcmp(tmp+4, str[1]+4) || !strcmp(tmp+4, str[2]+4) || !strcmp(tmp+4, str[3]+4)) p[5]++;
        else if(!strcmp(tmp+5, str[1]+5) || !strcmp(tmp+5, str[2]+5) || !strcmp(tmp+5, str[3]+5)) p[6]++;
    }
    long long sum = 0, price[7] = {2000000, 200000, 40000, 10000, 4000, 1000, 200};
    for(int i = 0; i < 7; i++){
        printf("%d%c",p[i],i==6?'\n':' ');
        sum += price[i]*p[i];
    }
    printf("%ld\n",sum);
    
}  