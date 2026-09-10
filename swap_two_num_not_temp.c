#include<stdio.h>
int main(){
    int firstnum,secondnum;        
    printf("\n\n============Swap Two Number==========\n\n");
    printf("Enter first number : ");  
    scanf("%d",&firstnum);           
    printf("Enter second number: ");
    scanf("%d",&secondnum);

     firstnum=firstnum+secondnum;   
     secondnum=firstnum-secondnum;  
     firstnum=firstnum-secondnum;   

     printf("First number : %d\n",firstnum);
     printf("Second number: %d",secondnum);
     printf("\n\n============End Of Program============\n\n");
    return 0;
}