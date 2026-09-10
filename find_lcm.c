
#include<stdio.h>
int main(){
    int firstnumber,secondnumber;
    int remainder;
    int lcm;
    int originalfirstnumber,originalsecondnumber;
    printf("\n\n==========GCD(HCF) And LCM check===========\n\n ");
    printf("Enter the first number :");
    scanf("%d",&firstnumber);
    printf("Enter the second number:");
    scanf("%d",&secondnumber);
    originalfirstnumber=firstnumber;
    originalsecondnumber=secondnumber;
    while (secondnumber!=0)
    {
        remainder=firstnumber%secondnumber;
        firstnumber=secondnumber;
        secondnumber=remainder;
    }
    printf("Finalnumber is  GCD(HCF) %d\n\n",firstnumber);
    lcm=(originalfirstnumber*originalsecondnumber)/firstnumber;
    printf("final number is LCM=%d\n",lcm);
    printf("\n\n===============END OF PROGRAM===============\n\n ");
    
    return 0;
}