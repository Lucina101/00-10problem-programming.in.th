#include<stdio.h>
#include<string.h>

int main(){
char b[1000001];
scanf("%s",b);
int c=0;
int d=0;//mod 3
int s=strlen(b);
for(int i=0;b[i]!='\0';i++){
    c+=(b[i]-'0')%3;
    c=c%3;
    if(i%2==0)
        d+=(b[s-i-1]-'0');
    else if(i%2==1)d+=((b[s-i-1]-'0')*10)%11;
    d=d%11;
}
printf("%d ",c);
printf("%d",d);

}
