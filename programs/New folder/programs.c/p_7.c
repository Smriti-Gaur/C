#include<stdio.h>

int main(){
    char ch;
    printf("Enter a character:");
    scanf("%c",&ch);

    if(ch<=122 && ch>=97){
        printf("It is lower case/n");
    }
    else{
        printf("It is not lowercase/n");
    }
    return 0;
}