#include<stdio.h>
int main(){
    int year;
    scanf("%d",&year);
    if(!(year%400) || year%100 && !(year%4)) printf("Bissextile Year\n");
    else printf("Common Year\n");
    return 0;
}