#include<stdio.h>
#include<string.h>

char fuckup[1000];
int lastdigit;
int main(){
    int N;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%s", fuckup);
        int gg=strlen(fuckup);
        lastdigit=fuckup[gg-1]-'0';
          if(lastdigit%2!=0)
            printf("%c\n",'T');
        else if(gg==1&&lastdigit==2)
            printf("%c\n",'T');
        else
            printf("%c\n",'F');
    }

}

