#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
char s[1005][100];
int n,a,b;
bool g;
int isequal(int i){
    a=strlen(s[i]);
    b=strlen(s[i+1]);
    if(a!=b)
        return 0;
    for(int k=0;k<a;k++){
        if(s[i][k]-s[i+1][k]!=0)
            return 0;
    }
    return 1;
}
void compare(int i,int j){
     g=true;
    for(int k=0;(s[i][k]!='\0'&&s[j][k]!='\0'&&g);k++){
        if(s[i][k]>s[j][k]){
            swap(s[i],s[j]);
            a++;
            g=false;
            return;
            }
        else if(s[i][k]<s[j][k]){
            g=false;
            return;
        }
    }
        if(g){
            if(strlen(s[i])>strlen(s[j])){
                swap(s[i],s[j]);
                return;
                }
        }
}
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        scanf("%s",s[i]);
//too lazy to write qsort so I write bubble sort instead! haha
    for(int u=1;u<=n;u++)
    for(int v=u;v<=n;v++){
        compare(u,v);
    }
    for(int i=1;i<=n;i++){
        if(isequal(i)!=1)
        printf("%s\n",s[i]);
}
}
