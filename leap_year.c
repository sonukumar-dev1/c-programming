#include<stdio.h>
int main(){
    int year;
    printf("\n\n=========Leap year checker========\n\n");
    printf("Enter a year: ");
    scanf("%d",&year);

    if((year % 4==0) ||( year % 400==0 && year % 100!=0)  ){
        printf("Leap year");
    }
    else{
        printf("This is not  a lear year");
    }
    printf("\n\n===========End Of Program===========\n\n");
    return 0;
}