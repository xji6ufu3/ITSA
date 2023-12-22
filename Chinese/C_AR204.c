#include <stdio.h>
#include <string.h>
int main(){
    int n,y,tmp;
    scanf("%d",&n);
    char str[][20] = {"pig","rat","ox","tiger","rabbit","dragon","snake","horse","sheep","monkey","rooster","dog"};
    while(n--){
        scanf("%d",&y);
        tmp = y;
        if(tmp<0) tmp++;
        while(tmp<0) tmp+=12;
        printf("%d %s\n",y,str[tmp%12]);
    }
}