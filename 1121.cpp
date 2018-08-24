#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
char p[100005];
int main(){
    int i,n;
    scanf("%d",&n);
    while(n--){
    scanf("%s",p);
    char q[50020];
    int t=0;
        for(i=0; p[i]!='\0'; i++)
        {
        if(t==0||q[t-1]-p[i]==0||(abs(q[t-1]-p[i])>2))
                {
                    q[t]=p[i];
                    t++;
                }
        else if(p[i]-q[t-1]>0&&p[i]-q[t-1]<=2)
                t--;
                }
        if(t==0)
            printf("yes\n");
        else
            printf("no\n");
        }

}

/*

()())((()))))))(()()()((((



*/
