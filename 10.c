#include<stdio.h>
int main(){
    int a,s,tmp;
    scanf("%d%d",&a,&s);
    while(s){
        tmp = s;
        s = a%s;
        a = tmp;
    }
    printf("%d\n",a);
    return 0;
}