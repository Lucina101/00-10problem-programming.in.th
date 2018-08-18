#include<stdio.h>
#include<string.h>
int main(){
int num=1;// position of ball
char b[51];
scanf("%s",b);
for(int i=0;b[i]!='\0';i++){
    if(b[i]=='A'&&num!=3){
        num=3-num;
    }
    else if(b[i]=='B'&&num!=1){
        num=5-num;
    }
    else if(b[i]=='C'&&num!=2){
        num=4-num;
    }
}
printf("%d",num);
}
