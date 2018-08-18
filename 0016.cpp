#include<stdio.h>
int realmax(int a, int b){
if(a>b) return a;
else return b;
}
int score[3];
int main(){
int n;
scanf("%d",&n);
char s[n];
scanf("%s",s);
for(int i=0;s[i]!='\0';i++){
    if(s[i]=="ABC"[i%3]) score[0]++;
     if(s[i]=="BABC"[i%4]) score[1]++;
     if(s[i]=="CCAABB"[i%6]) score[2]++;
    }
    int f=realmax(score[0],realmax(score[1],score[2]));
    printf("%d\n",f);
    if(score[0]==f) printf("Adrian\n");
    if(score[1]==f) printf("Bruno\n");
    if(score[2]==f) printf("Goran");
}

