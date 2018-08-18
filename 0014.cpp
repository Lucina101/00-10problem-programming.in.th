#include<stdio.h>
int temp=0;
 void swap (int& i,int& j){
if(i<=j){
        temp=i;
        i=j;
        j=temp;
    }
}

int gcd(int x, int y){
    if(x<0) x=-x;
    if(y<0) y=-y;
    swap(x,y);//9,6
    while(x%y!=0){
        x=x%y;//,6
        swap(x,y);//6,2
    }
return y;
}


int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    printf("%d",gcd(a,b));
}
