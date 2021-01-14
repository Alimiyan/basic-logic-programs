#include<stdio.h>
void main(){
    int num,i,fact=1;
    printf("enter the number\n");
    scanf("%d",&num);
    for(i=2;i<=num;i++){
        fact=i*fact;
    }
    printf("factoril : %d",fact);
}