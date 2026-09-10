#include<stdio.h>
int main(){
    int number;
    printf("\n\n=============Absolute value check===========\n\n");
    printf("Enter the number:");
    scanf("%d",&number);
    if(number<0){
        number=-(number);
        printf("Absolute Value  : %d",number);
    }
    else {
        printf("Absolute Value  : %d",number);
    }
    printf("\n\n================End Of Program===============\n\n");
    return 0;
}