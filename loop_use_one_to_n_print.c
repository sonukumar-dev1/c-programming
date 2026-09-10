#include<stdio.h>
int main(){
    int number,i;
    printf("\n\n============Print One To N============\n\n");
    printf("Enter the nuber: ");
    scanf("%d",&number);
    for(i=1;i<=number;i++){
        printf("%d ",i);
    }
    printf("\n\n============End Of Program============\n\n");
    return 0;
}