#include<stdio.h>

int mod[42];
int main(){
    int modulocount=0;
    int j;
    for(int i=0;i<=9;i++){
        scanf("%d",&j);
        j=j%42;
        if(mod[j]==0){
            modulocount++;
            mod[j]++;
            }
    }
    printf("%d",modulocount);
}
