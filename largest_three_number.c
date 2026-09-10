#include<stdio.h>
int main(){
    int firstnumber,secondnumber,thirdnumber;
    printf("\n\n============Largest Of three numbers ============\n\n");
    printf("Enter first number: ");
    scanf("%d",&firstnumber);
    printf("Enter second number: ");
    scanf("%d",&secondnumber);
    printf("Enter third number: ");
    scanf("%d",&thirdnumber);
    if(firstnumber>secondnumber && firstnumber>thirdnumber){
        printf("The first number is the largest: %d",firstnumber);
    }
    else if(secondnumber>firstnumber && secondnumber>thirdnumber){
        printf("The second number is the largest: %d",secondnumber);
    }
    else if(thirdnumber>firstnumber && thirdnumber>secondnumber){
        printf("The third number is the largest: %d",thirdnumber);
    }
    else{
        printf("Three number is equal");
    }
    printf("\n\n================End of Program===================\n\n");

    return 0;
}