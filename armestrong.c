#include<stdio.h>
#include<math.h>
void main(){
    int num, count=0, mod, arm=0;
printf("enter the number\n");
scanf("%d",&num);
int num1=num;
    while (num != 0){
        num=num/10;
        count++;
    }
    num=num1;
    while(num1!=0){
        mod=num1%10;
        arm=arm+pow(mod,count);
        num1=num1/10;
        printf("mid %d arm %d num1 %d",mod,arm,num1);
    }printf("\n %d",arm);
    if(arm==num){
        printf("number is armestrong\n");
    }
    else{
        printf("number is not armestrong\n");
    }
}


//In case of an Armstrong number of 3 digits, the sum of cubes of each digit is equal to the number itself. For example: 153 = 1*1*1 + 5*5*5 + 3*3*3 // 153 is an Armstrong number.