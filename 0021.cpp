#include<stdio.h>
#include<string.h>

int main(){
    int i;
    char code[101];
    gets(code);// use when we want to receive string with null character
    //a e i o u
    int dd= strlen(code);
    for(i=0;code[i]!='\0';i++){
    printf("%c",code[i]);
    if(code[i]=='a'||code[i]=='e'||code[i]=='i'||code[i]=='o'||code[i]=='u')
        i+=2;
    }
}

