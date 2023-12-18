#include<stdio.h>
int main(){
    double a;
    int s;
    while(scanf("%lf%d",&a,&s)!=EOF){
        if(s == 1){
            printf("%.1lf\n",(a-80)*0.7);
        } else {
            printf("%.1lf\n",(a-70)*0.6);
        }
    }
    return 0;
}