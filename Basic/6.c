#include<stdio.h>
int main(){
    int mon;
    scanf("%d",&mon);
    switch(mon){
        case 3: case 4: case 5:
            printf("Spring\n");
            break;
        case 6: case 7: case 8:
            printf("Summer\n");
            break;
        case 9: case 10: case 11:
            printf("Autumn\n");
            break;
        default:
            printf("Winter\n");
    }
    return 0;
}