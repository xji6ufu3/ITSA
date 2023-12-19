#include<stdio.h>  
int main(){  
    int n, m;
    scanf("%d%d",&n,&m);
    int a[n][m];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            scanf("%d",&a[i][j]);
    scanf("%d%d",&n,&m);
    int tmp;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%d",&tmp);
            printf("%d%c",a[i][j]+tmp,j==m-1?'\n':' ');
        }
    }
    
}  