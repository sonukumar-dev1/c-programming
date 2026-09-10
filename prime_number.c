#include<stdio.h>
int main(){
    int number,i;
    int isprime=1;
    printf("\n\n============Check the Prime number=============\n\n");

    printf("Enter the number:");
    scanf("%d",&number);
    if(number<=1){
        isprime=0;
    }else{
    for(i=2;i<number;i++){
        if(number%i==0){
            isprime=0;
            break;
        }
      }
    }
    if(isprime==1){
        printf("%d is a prime number.\n",number);
    }else{
        printf("%d is not a prime number.\n",number);

    }
    printf("\n\n================End Of Program=================\n\n");
    return 0;
}