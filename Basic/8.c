#include<stdio.h>
int main(){
    int a,check = 1;
    scanf("%d",&a);
    for(int i = 2; i < a; i++){
        check = a%i;
        if(!check) break;
    }
    if(!check) printf("NO\n");
    else printf("YES\n"); 
    return 0;
}