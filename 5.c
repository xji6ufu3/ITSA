#include<stdio.h>
int main(){
    int bit[8],a,p=1;
    scanf("%d",&a);
    for(int i = 0; i < 8; i++)
        bit[i] = (a&(p<<i))>>i;
    for(int i = 7; i >= 0; i--)
        printf("%d",bit[i]);
    printf("\n");
    return 0;
}