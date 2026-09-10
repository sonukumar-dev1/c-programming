#include<stdio.h>
int main(){
    int number,factorial=1;
    int i;
    printf("\n\n================Factorial Number check=============\n\n");
    printf("Enter the number         :");
    scanf(" %d",&number);
    for(i=1;i<=number;i++){
        factorial=factorial*i;
    }
    printf("Factorial of digit number: %d",factorial);
    printf("\n\n====================End Of Program==================\n\n");
    return 0;
}