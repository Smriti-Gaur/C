#include<stdio.h>

int main(){
    int a;
    printf("Enter a number:",a);
    scanf("%d",&a);

    if(a%1 || a%a){
        printf("This number is prime ");}
    else{
        printf("This number is not a prime number");
    }
    return 0;
}