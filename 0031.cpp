#include<stdio.h>
void rswap(int &x, int &y){
    int temp=x;
    x=y;
    y=temp;
}
void assort(int &x, int &y, int &z){
    if(x>y) rswap(x,y);
    if(x>z) rswap(x,z);
    if(y>z) rswap(y,z);
}
int main(){
int a,b,c;
int countnum=0;
scanf("%d%d%d",&a,&b,&c);
assort(a,b,c);
while(a!=1||b!=1||c!=1){
    c=c/2;
    assort(a,b,c);
    countnum++;
}
printf("%d",countnum);
}
