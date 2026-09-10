#include<stdio.h>
int main(){
    int digit;
    int num;
    int reverse=0;
    printf("Enter the number: ");
    scanf("%d",&num);
    while(num!=0){
        digit=num%10;
        reverse=reverse*10+digit;
        num/=10;
    }
    printf("Reverce a number= %d",reverse);
}