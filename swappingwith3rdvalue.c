#include<stdio.h>
void main(){
    int num1,num2;
    printf("enter two numbers\n");
    scanf("%d%d",&num1,&num2);
    printf("outputs are: \n%d, %d ",num1,num2);
    num1=num1+num2;
    num2=num1-num2;
    num1=num1-num2;
    printf("\nswapped outputs are: %d, %d ",num1,num2);
}