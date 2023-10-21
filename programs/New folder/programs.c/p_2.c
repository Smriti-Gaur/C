#include<stdio.h>

int main(){
    int num ;
    printf("enter a number : ");
    scanf("%d",&num);
    if(num % 97==0){
    printf("The number is divided by 97 %d\n",num);
    }
    else{
    printf("The number is not divisible by 97 %d\n",num);
    }

    return 0;
}