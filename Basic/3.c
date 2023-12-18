#include<stdio.h>
int main(){
    int x,y;
    while(scanf("%d%d",&x,&y)!=EOF)
    printf((x*x+y*y)>10000?"outside\n":"inside\n");
    return 0;
}