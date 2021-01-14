#include<stdio.h>
int sumFactorial(int);
void main(){
    int n,mod,res=0,n1,f;
    printf("enter the number\n");
    scanf("%d",&n);
    n1=n;
    while (n !=0){
        mod=n%10;
        f=sumFactorial(mod);
        res=res+f;
        n=n/10;
    }
    n=n1;
    if(res==n){
        printf("strong number\n");
    }
    else{
        printf("not strong number\n");
    }
}
    int sumFactorial(int mod){
        int i;
        int fac=1;
        for ( i = 2; i <=mod; i++){
            fac=fac*i;
        }
        return fac;   
    }