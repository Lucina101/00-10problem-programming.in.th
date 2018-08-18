#include<stdio.h>

int abs(int x){
if(x<0) x=-x;
return x;
}
//Ax^2+Bx+C=(ax+b)(cx+d) or in form of A=ac B=ad+bc C=cd
int main(){
int A,B,C;
int a,b,c,d;
scanf("%d%d%d",&A,&B,&C);
bool checkresult=false;
if(A==0){
    printf("No Solution");
    checkresult=true;
}
//Ax^2+Bx+C=(ax+b)(cx+d) or in form of A=ac B=ad+bc C=cd

for(int i=1;i<=A&&!checkresult;i++){
    if(A%i==0){
    a=i;
    c=A/i;//Ax^2+Bx+C=(ax+b)(cx+d) or in form of A=ac B=ad+bc C=cd
    //always note that a should be less than c
    for(int j=-abs(C);j<=abs(C)&&!checkresult;j++){
        if(j!=0&&C%j==0){
            b=j;
            d=C/j;
                if(a*d+b*c==B){
                printf("%d %d %d %d",a,b,c,d);
                checkresult=true;
        }
    }
    }
    }
}
if(!checkresult){
 if(C==0){printf("%d %d %d %d",1,0,A,B);
checkresult=true;}
}

 if(!checkresult){
    printf("No Solution");
}
}




