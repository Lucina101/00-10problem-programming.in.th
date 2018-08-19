#include<stdio.h>
//nugget number
int isnugget(int x){
    if(x<0)
        return 0;
    while(x%3!=0){
        x-=20;
        return isnugget(x);
    }
    for(int i=0;i<=x/9;i++){
        if(((x-(i*9)))%6==0)
            return 1;
    }
            return isnugget(x-20);
}
int main(){
    int n,c=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(isnugget(i)==1){
            printf("%d\n",i);
            c++;
        }
    }
    if(c==0){
        printf("no");
    }
}

