#include<stdio.h>
int main(){
    int number,i;
    printf("\n\n============Check the Prime number=============\n\n");

    printf("Enter the number:");
    scanf("%d",&number);
    for(i=2;i<=number-1;i++){
        if(number%i==0)
        break;
    }
    if(i==number){
        printf("%d is a prime number.\n",number);
    }else{
        printf("%d is not a prime number.\n",number);

    }
    printf("\n\n================End Of Program=================\n\n");
    return 0;
}