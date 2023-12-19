#include<stdio.h>  
int main(){  
    int a[6];
    int b[6][6];
    for(int i = 0; i < 6; i++) scanf("%d",&a[i]);
    for(int i = 0; i < 6; i++)
        for(int j = 0; j < 6; j++)
            printf("%03d%c",a[i]*a[j],j==5?'\n':' ');
}  