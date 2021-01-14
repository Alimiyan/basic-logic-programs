#include<stdio.h>
#include<math.h>
int check(int n){
    int r,l;
    r=n*n;
    while(n>0){
        if(n%10 != r%10){
            return 0;
        }
        n=n/10;
        r=r/10;  
    }
    return 1; 
}
int main(){
    int n;
     printf("enter the number\n");
    scanf("%d",&n);
    check(n)? printf("automorphic"): printf("not automorphic");
    
}

//In mathematics, an automorphic number is a number whose square "ends" in the same digits as the number itself. For example, 52 = 25, 62 = 36, 762 = 5776, and 8906252 = 793212890625, so 5, 6, 76 and 890625 are all automorphic numbers.
//if 5 is the number
//square of 5=25
//then the last digit of the sqaure
//that is 5 equals to the number itself