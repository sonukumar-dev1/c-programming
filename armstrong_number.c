#include<stdio.h>
#include<math.h>
int main(){
    int original_number ,sum=0;
    int number,count=0;
    int remainder;
    printf("Enter the nubmer: ");
    scanf("%d",&number);
    original_number=number;
    if(number==0){
      count=1;
    }
    else{
        while(number!=0){
         number=number/10;
         count++;
    }
}
    number=original_number;
    while(number!=0){
        remainder=number%10;
        sum=sum+(int)round(pow(remainder,count));
        number=number/10;
    }
    if(original_number==sum){
        printf("%d is a Armstrong number",original_number);
    }
    else{
        printf("%d is not Armstrong number",original_number);
    }
    return 0;
}
