#include<stdio.h>
int main(){
    int number;
    printf("\n\n======Checker number positive or negative======\n\n");
    printf("Enter a number: ");
    scanf("%d",&number);
    if(number>0){
        printf("The number is Positive ");
    }else{
        printf("The number is Negative ");
    }
   printf("\n\n================End Of Program===================\n\n");
    return 0;
}