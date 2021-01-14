#include<stdio.h>
void main(){
    int n,i,res=0;
    printf("enter the number\n");
    scanf("%d",&n);
    for (i=1;i<=n/2;i++){
        if(n%i==0){
            res=res+i;
        }
        
    }
    if(res==n){
        printf("perfect number\n");
    }
    else{
        printf("not perfect number");
    }
    
    
}