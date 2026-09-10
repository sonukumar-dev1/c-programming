#include<stdio.h>
int main (){
    int base,exponent;
    int result=1;
    int i;
    printf("Enter the base: ");
    scanf("%d",&base);
    printf("Enter the exponent: ");
    scanf("%d",&exponent);


    for(i=1;i<=exponent;i++){
        result=result*base;
    }
        printf("Power of number: %d",result);

    return 0;
}