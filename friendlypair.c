#include<stdio.h>
void main(){
    int num1,num2;
    int i;
    int sum1=0,sum2=0;
    printf("enter two number\n");
    scanf("%d%d",&num1,&num2);
    for(i=1;i<num1;i++){
        if(num1%i==0){
            sum1=sum1+i;
        }
    }
     for(i=1;i<num2;i++){
        if(num2%i==0){
            sum2=sum2+i;
        }
    }
    if(sum1==num1 && sum2==num2){
        printf("the numbers are friendly pair\n");
    }else{
        printf("the numbers are not friendly pair");
    }
    
}