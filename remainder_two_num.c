#include<stdio.h>
int main(){
    float first=0.0,second=0.0;
    float remainder=0.0;
    printf("\n\n-------------------Remainder of two number start----------------------\n\n");
    printf("Enter first number: ");
    scanf("%f",&first);
    printf("Enter second  number: ");
    scanf("%f",&second);
    remainder=fmod(first,second);
    printf("Remainder of two numbers is: %.2f",remainder);
    printf("\n\n--------------------Remainder of two number end---------------------\n\n");
    return 0;
}