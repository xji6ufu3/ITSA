#include <stdio.h>
#include <string.h>
int main(){
    int n,a;
    scanf("%d",&n);
    char str[][20] = {"Mercury","Venus","Earth","Mars","Juputer","Saturn","Uranus","Neptunus","Pluto"};
    while(n--){
        scanf("%d",&a);
        printf("%d %s\n",a,str[a-1]);
    }
}