#include<stdio.h>
int main (){
    int i,j;
    int number;
    printf("Enter a number: ");
    scanf("%d",&number);
    for(i=1;i<=number;i++){
        for(j=1;j<=i;j++){
            printf("*");
        }
            printf("\n");
    }  
    return 0;
}