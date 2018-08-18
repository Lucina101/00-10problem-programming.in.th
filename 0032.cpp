#include<stdio.h>
#include<string.h>
int main(){
int n,temp;
scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++){
scanf("%d",&a[i]);
for(int j=0;j<=i;j++){
    if(a[j]>a[i]){
        temp=a[j];
        a[j]=a[i];
        a[i]=temp;
    }}
}
if(a[0]==0){
    for(int k=1;k<n;k++){
        if(a[k]==0) continue;
        else {a[0]=a[k];a[k]=0;break;}
    }

}
for(int i=0;i<n;i++){
    printf("%d",a[i]);
}

}
