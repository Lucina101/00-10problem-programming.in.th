#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;

char a[200],b[200];
int main(){
    char x[2];
    scanf("%s%s%s",a,x,b);
    if(x[0]=='*'){
        printf("%d",1);
        for(int k=1;k<=strlen(a)+strlen(b)-2;k++)
        printf("%d",0);
    }
    else if(x[0]=='+'){
            int u=strlen(a),v=strlen(b);
        if(u==v){
            printf("%d",2);
        }
        else printf("%d",1);
        for(int i=1;i<=max(u,v)-1;i++){
            if(i==(max(u,v)-min(u,v)))
            printf("%d",1);
            else printf("%d",0);
        }
    }
}
