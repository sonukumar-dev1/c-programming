#include<stdio.h>
int main(){
    int arr[1000];
    int i,number;
    int sum=0;
    int avarage;
   printf("Enter the elements number: ");
   scanf("%d",&number);
   for(i=1;i<=number;i++){
    printf("%d is number Elements:",i);
    scanf("%d",&arr[i]);
    sum+=arr[i];
   }
    avarage=sum/number;
     printf("Sum of All Elements:%d\n",sum);

     printf("Avarage number is :%d\n",avarage);

}