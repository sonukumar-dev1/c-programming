#include<stdio.h>
int main(){
    int firstnumber,secondnumber;
    int remainder;
    printf("Enter the first number:");
    scanf("%d",&firstnumber);
    printf("Enter the second number:");
    scanf("%d",&secondnumber);
    while (secondnumber!=0)
    {
        remainder=firstnumber%secondnumber;
        firstnumber=secondnumber;
        secondnumber=remainder;
    }
    printf("Final GCD(HCF) %d",firstnumber);
    
    return 0;
}