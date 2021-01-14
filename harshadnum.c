#include<stdio.h>
void main(){
    int num,mod,sum=0,res=0;
    printf("enter the number\n");
    scanf("%d",&num);
    int num1=num;
    while (num!=0){
        mod=num%10;
        sum=sum+mod;
        num=num/10;
    }
    if((num1%sum)==0){
        printf("it is a harshad number");
    }else{
        printf(" it is not a harshad number");
    }
}