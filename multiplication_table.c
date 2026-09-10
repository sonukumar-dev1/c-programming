#include<stdio.h>
int main(){
    int number ,i,multi;
    printf("\n\n===============Multiplication Table============\n\n");
    printf("Enter the number:");
    scanf("%d",&number);
    for(i=1;i<=10;i++){ 
        multi=number*i;
        printf("%d x %d = %d\n",number,i,multi);
    }
    printf("\n\n=================End Of Program================\n\n");
    return 0;
}