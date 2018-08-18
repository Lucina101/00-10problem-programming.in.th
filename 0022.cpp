#include<stdio.h>

int main(){
int n,l;
scanf("%d",&n);
for(int i=1;i<=n;i++){
        if(i>n/2)
        l=n-i+1;
        else l=i;
    for(int j=1;j<=n-(n+1)%2;j++){
        if(j>=((n/2)+n%2)-(l-1)&&j<=((n/2)+n%2)+l-1)
        printf("*");
        else printf("-");
    }
    printf("\n");
    ;
}
}
/*
---*---
--*-*--
-*---*-
*-----*
-*---*-
--*-*--
---*---

---*---
--*-*--
-*---*-
*-----*
*-----*
-*---*-
--*-*--
---*---
*/
