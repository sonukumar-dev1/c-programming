#include<stdio.h> //Header file
int main(){
    
    int number;   //Variable declaration
    printf("\n\n======Even or Odd Checker=====\n\n");
    printf("Enter a number: ");
    scanf("%d",&number);
    if(number%2==0){       // Checker Even or Odd
        printf("Number : %d\n",number);
        printf("Result : Even number");  // Display result
    }else{
        printf("Result : Odd number");   
    }
    printf("\n\n=========End of Program=========\n\n");
    return 0;
}