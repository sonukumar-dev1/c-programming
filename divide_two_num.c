#include<stdio.h>
int main(){
    float first,second;
    printf("\n\n-------------------Division of two number start----------------------\n\n");
    printf("Enter first number: ");
    scanf("%f",&first);
    printf("Enter second number: ");
    scanf("%f",&second);
    printf("Division of two numbers is: %.2f",first/second);
    printf("\n\n--------------------Division of two number end---------------------\n\n");
    return 0;
}