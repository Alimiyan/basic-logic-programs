#include<stdio.h>
void main(){
    int rev,n,res;
    printf("enter the num\n");
    scanf("%d",&n);
    while (n!=0){
        rev=n%10;
        res=res*10+rev;
        n=n/10;
    }
    printf("reverse: %d",res);
    
}