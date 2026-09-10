#include<stdio.h>
int main(){
    char ch;
    printf("\n\n============Check Uppercase or Lowercase===========\n\n");
    printf("Enter a character: ");
    scanf("%c",&ch);

    if(ch>='A' && ch<='Z'){
        printf("Uppercase");
    }
    else if(ch>='a' && ch<='z'){
        printf("Lowercase");
    }
    else{
        printf("Invalid character");
    }
    printf("\n\n===================End Of Program===================\n\n");
    return 0;

}