#include<stdio.h>
#include<string.h>
#include<ctype.h>
int numbig,numsmall;
int main(){
    char check[10001];
    scanf("%s",check);
    int gg=strlen(check);
    for(int i=0;i<gg;i++){
        if(isupper(check[i])) numbig++;
        if(islower(check[i])) numsmall++;
        if(numbig>0&&numsmall>0){
            printf("Mix");
            break;
        }
    }
    if(numbig==0) printf("All Small Letter");
    if(numsmall==0) printf("All Capital Letter");
}
