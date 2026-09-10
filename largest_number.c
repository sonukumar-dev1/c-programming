#include<stdio.h>
int main(){
    int first,second;
    printf("\n\n--------Largest number checker--------\n\n");
    printf("Enter the first number: ");
    scanf("%d",&first);
    printf("Enter the second number: ");
    scanf("%d",&second);
    if(first>second){
        printf("The first number is largest: %d",first);
    }
    else if(first<second){
        printf("The second number is largest: %d",second);
    }
    else{
        printf("The numbers is equal");
    }
    printf("\n\n--------------End of Program-----------------\n\n");
    return 0;
}