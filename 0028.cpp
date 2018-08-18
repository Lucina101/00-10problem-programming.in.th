#include<stdio.h>
// This is the hardest problem in 00 question in programming.in.th
// since I'm wrong just because I type one letter wrong....
char x[9][500];
int score[8][8],s[6],r[6],t,u;
int main(){
    for(int i=1;i<=4;i++)
    scanf("%s",x[i]);
    for(int i=1;i<=4;i++){
        for(int j=1;j<=4;j++)
            scanf("%d",&score[i][j]);
    }
    for(int i=2;i<=4;i++){//score
        for(int j=1;j<i;j++){
            if(score[j][i]>score[i][j])
             s[j]+=3;
            else if(score[j][i]<score[i][j])
                s[i]+=3;
            else {s[i]+=1;s[j]+=1;}
            }
        }
        for(int i=1;i<=4;i++)
            r[i]=1;
    for(int i=1;i<=3;i++){//ranking
        for(int j=i+1;j<=4;j++){
            if(s[i]>s[j]) r[j]++;
            else if(s[j]>s[i]) r[i]++;
            else if(s[i]==s[j]){
                t=score[i][1]+score[i][2]+score[i][3]+score[i][4]-score[1][i]-score[2][i]-score[3][i]-score[4][i];
                u=score[j][1]+score[j][2]+score[j][3]+score[j][4]-score[1][j]-score[2][j]-score[3][j]-score[4][j];
                if(t>u) r[j]++;
                else if(t<u) r[i]++;
              else if(t==u){
                    t=score[i][1]+score[i][2]+score[i][3]+score[i][4];
                    u=score[j][1]+score[j][2]+score[j][3]+score[j][4];
                    if(t>u) r[j]++;
                    else  r[i]++;
                }
            }
        }
    }
    for(int i=1;i<=4;i++){
     for(int j=4;j>=1;j--){
        if(r[j]==i){
            printf("%s",x[j]);
            printf(" %d\n",s[j]);
        }
     }
    }
    }

