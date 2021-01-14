#include<stdio.h>
void main(){
    int n,a=0,b=1,sum=0;
    printf("enter the number\n");
    scanf("%d",&n);
    printf("fibanocci series is: \n");
        while(sum<=n){
            printf("%d ",sum);
            a=b;
            b=sum;
            sum=a+b;
        }
}