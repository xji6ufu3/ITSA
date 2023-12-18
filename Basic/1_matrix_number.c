#include<stdio.h>
int main(){
    char str1[10][6] = {"*****","    *","*****","*****","*   *","*****","*****","*****","*****","*****"};
    char str2[10][6] = {"*   *","    *","    *","    *","*   *","*    ","*    ","    *","*   *","*   *"};
    char str3[10][6] = {"*   *","    *","*****","*****","*****","*****","*****","    *","*****","*****"};
    char str4[10][6] = {"*   *","    *","*    ","    *","    *","    *","*   *","    *","*   *","    *"};
    char str5[10][6] = {"*****","    *","*****","*****","    *","*****","*****","    *","*****","    *"};
    char num[5];
    scanf("%s",num);
    for(int i = 0; i < 4; i++){
        printf("%s",str1[num[i]-'0']);
        if(i != 3) printf(" ");
        else printf("\n");
    }
    for(int i = 0; i < 4; i++){
        printf("%s",str2[num[i]-'0']);
        if(i != 3) printf(" ");
        else printf("\n");
    }
    for(int i = 0; i < 4; i++){
        printf("%s",str3[num[i]-'0']);
        if(i != 3) printf(" ");
        else printf("\n");
    }
    for(int i = 0; i < 4; i++){
        printf("%s",str4[num[i]-'0']);
        if(i != 3) printf(" ");
        else printf("\n");
    }
    for(int i = 0; i < 4; i++){
        printf("%s",str5[num[i]-'0']);
        if(i != 3) printf(" ");
        else printf("\n");
    }
    return 0;
}
