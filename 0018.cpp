#include<stdio.h>
int n,k,a[1008];
int main(){
    scanf("%d%d",&n,&k);
     int t=0;
    for(int x=2;x<=n;x++){
        if(a[x]==0){
            for(int y=1;y<=(n/x);y++){
                if(a[y*x]==0){
                a[y*x]++;
                t++;
                if(t==k) {
                    printf("%d",y*x);
                    break;
                        }
                }
            }
        }
    }
}
