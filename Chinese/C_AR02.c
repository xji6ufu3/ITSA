#include<stdio.h>  
int main(){  
    int arr[6];  
    for(int i = 0; i < 6; i++) scanf("%d",&arr[i]);  
    for(int i = 0; i < 6; i++){  
        printf("%d",arr[5-i]);  
        if(i != 5) printf(" ");  
        else printf("\n");  
    }   
}  