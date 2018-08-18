#include<stdio.h>

int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
        if(c-b>b-a)
        printf("%d\n",c-b-1);
        else
            printf("%d\n",b-a-1);

}
