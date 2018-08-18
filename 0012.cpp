#include<stdio.h>
#include<string.h>

int main(){
char letsdecorate[16];
scanf("%s",letsdecorate);
int n=strlen(letsdecorate);
int l=4*n+1;
 for(int i=1;i<=l;i++){
if(i%4==3&&i%12!=11)printf("#");
else if(i%12==11&&i!=1)printf("*");
else printf(".");
}
printf("\n");
for(int j=1;j<=l;j++){
if(j%2==1) printf(".");
else if(j%12==10||j%12==0)
printf("*");
else printf("#");
}
printf("\n");
for(int k=1;k<=l-1;k++){
        int finalnum =(k-3)/4;
if(k%4==3) printf("%c",letsdecorate[finalnum]);
else if((k==1||k%12==5)) printf("#");
else if(k!=1&&(k%12==9||k%12==1)) printf("*");
else printf(".");
}
if(n%3==0) printf("*");
else printf("#");
printf("\n");
for(int j=1;j<=l;j++){
if(j%2==1) printf(".");
else if(j%12==10||j%12==0)
printf("*");
else printf("#");
}
printf("\n");
for(int i=1;i<=l;i++){
if(i%4==3&&i%12!=11)printf("#");
else if(i%12==11&&i!=1)printf("*");
else printf(".");
}
}
