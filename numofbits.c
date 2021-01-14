#include<stdio.h>
void main(){
    int n,num,count=0;
    printf("enter the number\n");
    scanf("%d",&n);
    while(n!=0){
        n=n/10;
        count++;
    }
    printf("count= %d",count);
}