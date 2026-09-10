#include<stdio.h>
int main(){
    int marks;
    printf("Enter a number: ");
    scanf("%d",&marks);
    if(marks<0 || marks>100){
        printf("Invalid number");
    }
    else if(marks>=90){
        printf("number: %d\n",marks);
        printf("Grater than A");
    }
    else if(marks>=80){
        printf("number: %d\n",marks);
        printf("Grater than B");
    }
    else if(marks>=70){
        printf("number: %d\n",marks);
        printf("Grater than C");
    }
    else if(marks>=40){
        printf("number: %d\n",marks);
        printf("Grater than D");
    }
    else{
        printf("number: %d\n",marks);
        printf("fail");
    }
    return 0;
}