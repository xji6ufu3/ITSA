#include<stdio.h>
int main(){
    long long sum = 0;
    int n;
    scanf("%d",&n);
    for(int i = 3; i <= n; i+=3){
        sum += i;
    }
    printf("%ld\n",sum);
    return 0;
}