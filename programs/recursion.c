#include<stdio.h>
int factorial(int x);


int main(){
    int a=5;
    printf("the value of %d is %d" ,a,factorial(a));
    return 0;
    }


    int factorial(int x){
        if (x==1 || x==0){
            return 1;
        }
    }
