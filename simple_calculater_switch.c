#include<stdio.h>
int main(){
    int firstnum,secondnum;
    char op;
    printf("\n\n============Simple calculator============\n\n");
    printf("First number : ");
    scanf("%d",&firstnum);
    printf("Operator     : ");
    scanf(" %c",&op);
    printf("Second number: ");
    scanf("%d",&secondnum);
    switch(op){
        case'+':
        printf("Result       : %d",firstnum+secondnum);
        break;
        case'-':
        printf("Result       : %d",firstnum-secondnum);
        break;
        case'*':
        printf("Result       : %d",firstnum*secondnum);
        break;
        case'/':
        printf("Result       : %d",firstnum/secondnum);
        break;
        case'%':
        printf("Result       : %d",firstnum%secondnum);
        break;
        default:
            printf("Invalid Operator");
        
    }
    printf("\n\n==============End Of Program============\n\n");
    return 0;
}