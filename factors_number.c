#include<stdio.h>
int main(){
    int number,i,remaider;
    printf("Enter a number : ");
    scanf("%d",&number);
    if(number<=0){
        printf("Please enter a positive number");
    }
    else{
        for(i=1;i<=number;i++){
            remaider=number%i;
            if(remaider==0){
                printf("%d \n",i);
            }
        }
    
   }
   return 0;
}