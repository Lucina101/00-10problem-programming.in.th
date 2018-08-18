#include<stdio.h>

/*void supakorn(int * x){
    *x=8;
    printf("at function x=%d\n",*x);
    return ;
    /* supakorn = function name
        x = argument;
        int in front of supakorn = return type;
        void = no return type;
    */

/*int factorial(int n){
if(n==0) return 1;
return n*factorial(n-1);

}*/

int main(){
    int n;
	scanf("%d",&n);
	int m,M;
	for(int i=1;i<=n;i++){
        int t;
        scanf("%d",&t);
        if(i==1) m=t,n=t;
        if(t<=m) m=t;
        if(t>=M) M=t;
	}
	printf("%d\n",m);
	printf("%d",M);
	}
/*int a=112;//-2^31 to 2^31-1;
	char b;//ascii
	bool c;//true false
	double d;//can't remember
	long long e;//-2^63 to 2^63-1
	unsigned int f; //2^32-1
	unsigned long long g;//2^64-1;
	float h;//can't remember too
	int i[1000];
	i[0]=-1;
	i[1]=3;
	i[2]=4;

	//array start with 0 and end with n-1
	char j[10000];
	printf("before function a=%d\n",a);
	supakorn(&a);
	printf("%d\n",a);
	//begin at 0 end at \0;
	// "Man" = "M"+"a"+"n"+'\0'
	//when scanf cannot spacebar like you cannot scan "Man Za"



}
