#include<stdio.h>
int main(){
    int number,sum=0;
    int i;
    printf("\n\n================Sum Number Digit===============\n\n");
    printf("Enter the number         :");
    scanf(" %d",&number);
    for(i=1;i<=number;i++){
   // printf("Sum of digit number: %d",i);
        sum=sum+i;
    }
    printf("Sum of digit number: %d",sum);
    printf("\n\n===================End Of Program==================\n\n");
    return 0;
}