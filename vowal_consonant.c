#include<stdio.h>
int main(){
    char ch;
    printf("\n\n==============Vowel or Consonant checker============\n\n");
    printf("Enter the character: ");
    scanf("%c",&ch);
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U'){
        printf("Vowel");
    }
    else{
        printf("consonant");
    }
    printf("\n\n====================End Of Program===================\n\n");
    return 0;
}