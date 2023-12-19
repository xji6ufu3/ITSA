#include<stdio.h>  
int main(){  
    int a;
    scanf("%d",&a);
    while(a--){
        int matrix[100][100];
        int n, m;
        scanf("%d%d", &n, &m);
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                scanf("%d",&matrix[i][j]);
            }
        }
        int check = 1;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                check = 1;
                if(i > 0 && matrix[i][j]){
                    if(!matrix[i-1][j]) check = 0;
                }
                if(i < n-1 && matrix[i][j]){
                    if(!matrix[i+1][j]) check = 0;
                }
                if(j > 0 && matrix[i][j]){
                    if(!matrix[i][j-1]) check = 0;
                }
                if(j < m-1 && matrix[i][j]){
                    if(!matrix[i][j+1]) check = 0;
                }
                // if((i == 0 || i == n-1 || j == 0 || j == m-1) && matrix[i][j]) check = 0;
                if(check) printf("_ ");
                else printf("0 ");
            }
            printf("\n");
        }
        if(a) printf("\n");
    }
}  