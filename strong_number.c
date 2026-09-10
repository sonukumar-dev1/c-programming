#include<stdio.h>
int main(){
    int number;
    int originalNumber;
    int sum=0,digit;
    printf("Enter the number: ");
    scanf("%d",&number);
    originalNumber=number;
    while(originalNumber>0){
        digit=originalNumber%10;
        int  factorial=1;
        int i=1;
        while(i<=digit){
        factorial=factorial*i;
           i++;
        }
         sum=sum+factorial;
         

         originalNumber/=10;
    }
    if(sum==number){
      
      printf("%d is a Strong number.",number);
       
    }
    else{
      printf("%dis not Strong number.",number);

    }


    return 0;
}