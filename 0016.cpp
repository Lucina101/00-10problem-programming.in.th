#include<stdio.h>
#include<algorithm>
using namespace std;
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
    int f=max(score[0],max(score[1],score[2]));
    printf("%d\n",f);
    if(score[0]==f) printf("Adrian\n");
    if(score[1]==f) printf("Bruno\n");
    if(score[2]==f) printf("Goran");
}

