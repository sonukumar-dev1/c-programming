#include<stdio.h>
int findsum(int a,int b){
return a+b;
}
int main(){
    int num1,num2;
    int result;
    printf("Enter the First number: ");
    scanf("%d",&num1);
    printf("Enter the Second number: ");
    scanf("%d",&num2);
    result=findsum(num1,num2);
    printf("Result= %d\n",result);
return 0;
}