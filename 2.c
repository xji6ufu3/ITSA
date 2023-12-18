#include<stdio.h>
int main(){
    double a;
    while(scanf("%lf",&a) != EOF)
    printf("%.1lf\n",a*1.6);
    return 0;
}