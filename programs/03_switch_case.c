#include <stdio.h>

int main(){
    int marks;
    printf("entre your marks\n");
    scanf("%d",&marks);

    switch(marks){
        case 90-100 :
        printf("your grade is A\n");
        break;
case 80-90:
printf("your grade is B\n");
break;
case 70-80 :
printf("your grade is C\n");
break;
case 60-70 :
printf("your grade is D\n");
break;
default:
printf("you are fail \n");
break;
    }
    return 0;



