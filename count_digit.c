#include<stdio.h>
int main(){
    int count=0;
    int num;
    printf("\n\n============Count Digit Program==========\n\n");
    printf("Enter the number      : ");
    scanf("%d",&num);
    if(num==0){
        count=1;
        printf("Number is Zero");
    }
    else{
    while (num!=0)
    {   
        num=num/10;
        count++;
    }
    printf("Count digit number is : %d ",count);
}
    printf("\n\n===============End Of Program============\n\n");
    return 0;
}