#include<stdio.h>
int main(){
int a[4],i,j,k;
int ans=0;
for(i=0;i<4;i++){
scanf("%d",&a[i]);  //a b c d min(a,b)* min(c,d)
for(j=0;j<=i;j++){
    if(a[j]>a[i]){k=a[j];a[j]=a[i];a[i]=k;}
}
}
    printf("%d",(a[0]*a[2]));
}

