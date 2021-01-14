#include<stdio.h>
void main(){
    int num,div=0;
    printf("enter the number\n");
    scanf("%d",&num);
    for(int i=1;i<num;i++){
        if(num%i==0){
            div=div+i;
        }
    }
    if(num<div){
        printf("it is an abundant number");
    }else{
        printf("it is not an abundant number");
    }
    
}

//abundant number =   The integer 12 is the first abundant number. Its proper divisors are 1, 2, 3, 4 and 6 for a total of 16;
/// an abundant number or excessive number is a number that is smaller than the sum of its proper divisors.