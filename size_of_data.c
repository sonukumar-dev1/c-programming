#include<stdio.h>
int main(){
    sizeof(int);
    sizeof(float);
    sizeof(double);
    sizeof(char);
    printf("\n\n-----size of data types in c language start------\n\n");
    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of float: %zu bytes\n", sizeof(float));
    printf("Size of double: %zu bytes\n", sizeof(double));
    printf("Size of char: %zu bytes\n", sizeof(char));
    printf("\n\n-----size of data types in c language end------\n\n");
    return 0;
}