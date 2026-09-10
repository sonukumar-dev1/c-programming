#include<stdio.h>
int main(){
    int digit;
    int num;
    int reverse=0;
    int original;
    printf("Enter the number: ");
    scanf("%d",&num);
    original=num;
    while(num!=0){
        digit=num%10;
        reverse=reverse*10+digit;
        num/=10;
    }
    if(original==reverse){
     printf("%d is an palindrome number.",reverse);
    }else{
     printf("%d is not palindrome number.",reverse);

    }
    return 0;
}