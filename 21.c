#include<stdio.h>
int main(){
    double arr[10], max, min;
    for(int i = 0; i < 10; i++) scanf("%lf",&arr[i]);
    max = min = arr[0];
    for(int i = 0; i < 10; i++){
        if(arr[i] > max) max = arr[i];
        if(arr[i] < min) min = arr[i];
    }
    printf(
        "maximum:%.2lf\n"
        "minimum:%.2lf\n"
        ,max,min);
    return 0;
}