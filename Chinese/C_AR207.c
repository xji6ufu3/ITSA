#include <stdio.h>
#include <string.h>
struct{
    int score;
    char name[100];
} stru[20];
int main(){
    int n;
    scanf("%d",&n);
    int tmp;
    char ctmp[100];
    for(int i = 0; i < n; i++){
        scanf("%s",stru[i].name);
        scanf("%d",stru[i].score);
    }
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-i-1; j++){
            if(stru[j].score < stru[j+1].score){
                strcpy(ctmp,stru[i].name);
                strcpy(stru[j].name,stru[j+1].name);
                strcpy(stru[j+1].name,ctmp);
                tmp = stru[i].score;
                stru[i].score = stru[i+1].score;
                stru[i+1].score = tmp;
            }
        }
    }
    for(int i = 0; i < n; i++){
        printf("%d %s %d\n",i+1,stru[i].name,stru[i].score); 
    }
}