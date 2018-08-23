#include<stdio.h>
#include<algorithm>
using namespace std;
    char s[10000];
    int a[8];
int main(){
    int x=0,y=0,k;
    scanf("%s",s);
    scanf("%d",&k);
    for(int i=0;s[i]!='\0';i++){
    if(s[i]=='N') {y++;a[1]++;}
    else if(s[i]=='S'){y--;a[2]++;}
    else if(s[i]=='E') {x++;a[3]++;}
    else if(s[i]=='W'){x--;a[4]++;};
    }
    bool t=true;
    while(t){
    t=false;
    if(x<0&&a[3]>0&&k>0){
        a[3]--;
        k--;
        x--;
        t=true;
    }
    else if(x>0&&a[4]>0&&k>0){
        a[4]--;
        k--;
        x++;
        t=true;
    }
    if(y<0&&a[1]>0&&k>0){
        a[1]--;
        k--;
        y--;
        t=true;
    }
    else if(y>0&&a[2]>0&&k>0){
        a[2]--;
        k--;
        y++;
        t=true;
    }
    }
    printf("%d\n",2*(abs(x)+abs(y)-k));
}
