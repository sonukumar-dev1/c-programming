#include<stdio.h>
int main(){
    int first=0,second=1;
    int next,n,i;
    printf("\n\n==============Fibonacci Number===============\n\n");
    printf("Enter the number: ");
    scanf("%d",&n);
    if(n<=0){
        printf("Please enter a positive number.\n");
        return 0;
    }
    if(n>=1)
    printf("%d ",first);
    if(n>=2)
    printf("%d ",second);
    for(i=1;i<=n;i++){   
        next=first+second;
        printf("%d ",next);
        first=second;
        second=next;  
    }
    printf("\n");
    printf("\n\n===============End Of Program================\n\n");

    return 0;
}