#include<stdio.h>
#include<string.h>
#include<ctype.h>

int n,m,k,a;//a is string length of tar
char x[300][300],tar[500];

int findr(int u,int v){//find row
    for(int k=1;k<a;k++){
        if(x[u][v+k]!=tar[k])
            return 0;
    }
    return 1;
}

int findd(int u,int v){//find down
for(int k=1;k<a;k++){
        if(x[u+k][v]!=tar[k])
            return 0;
    }
    return 1;
}

int findcl(int u,int v){//find cross left
    for(int k=1;k<a;k++){
        if(x[u-k][v+k]!=tar[k])
            return 0;
    }
    return 1;
}

int findcr(int u,int v){//find cross right
        for(int k=1;k<a;k++){
        if(x[u+k][v+k]!=tar[k])
            return 0;
    }
    return 1;
}

int findbr(int u,int v){
    for(int k=1;k<a;k++){
        if(x[u][v-k]!=tar[k])
            return 0;
    }
    return 1;
}

int findbd(int u,int v){
    for(int k=1;k<a;k++){
        if(x[u-k][v]!=tar[k])
            return 0;
    }
    return 1;
}

int findbcl(int u,int v){//find cross left

    for(int k=1;k<a;k++){
        if(x[u+k][v-k]!=tar[k])
            return 0;
    }
    return 1;
}

int findbcr(int u,int v){//find cross right
        for(int k=1;k<a;k++){
        if(x[u-k][v-k]!=tar[k])
            return 0;
    }
    return 1;
}


void findans(){
    bool v=true;
    for(int i=0;i<n&&v;i++){
        for(int j=0;x[i][j]!='\0'&&v;j++){
            if(x[i][j]==tar[0]){
                if(findcl(i,j)==1||findcr(i,j)==1||findd(i,j)==1||findr(i,j)==1||findbcl(i,j)==1||findbcr(i,j)==1||findbd(i,j)==1||findbr(i,j)==1){
                    printf("%d %d\n",i,j);
                    v=false;
                    break;
                    }
            }
        }
    }
}

int main(){
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++){
        scanf("%s",x[i]);
        for(int j=0;x[i][j]!='\0';j++){
            x[i][j]=tolower(x[i][j]);
        }
    }
    scanf("%d",&k);
    for(int l=1;l<=k;l++){
        scanf("%s",tar);
         a=strlen(tar);
         for(int v=0;tar[v]!='\0';v++){
            tar[v]=tolower(tar[v]);
         }
         findans();
    }
}
