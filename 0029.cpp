#include<stdio.h>

int main(){
int x,y;
scanf("%d%d",&x,&y);
if(x<y){
    if(y%x!=0)
    printf("%d",y/x+1);
    else
    printf("%d",y/x);
}
else if(x>y)
    printf("%d",2);
}
