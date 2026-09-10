#include<stdio.h>
int main(){
    int num;
    int sum=0;
    int digit;
    printf("\n\n==============Sum Digit Program=============\n\n");
    printf("Enter the number      : ");
    scanf("%d",&num);
    while(num!=0){
        digit=num%10;
        sum=sum+digit;
        num/=10;
    }
     printf("Sum of digit= %d",sum);
    printf("\n\n===============End Of Program============\n\n");
    return 0;
}