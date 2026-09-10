#include<stdio.h>
int main(){
   int num1,num2,temp;
   printf("\n\n-------------------Swap two numbers start----------------------\n\n");
   printf("Enter first number: ");
   scanf("%d",&num1);
   printf("Enter second number: ");
   scanf("%d",&num2);
   temp=num1;
   num1=num2;
   num2=temp;
   printf("\nAfter swapping:\n");
   printf("First number = %d\n",num1);
   printf("Second number = %d\n",num2);
   printf("\n\n--------------------Swap two numbers end---------------------\n\n");
   return 0;
}