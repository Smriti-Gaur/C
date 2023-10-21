#include<stdio.h>

int main(){
    int physics, english, maths;
    int total;
    printf("Enter the physics marks\n");
    scanf("%d",&physics);

    printf("Enter the english marks\n");
    scanf("%d",&english);

    printf("Enter the maths marks\n");
    scanf("%d",&maths);

    total = ( physics + english + maths )/3;

    if((total<40) || physics < 33 || english<33 ||maths< 33){
    printf("Your total percentage is %d and you are fail\n",total);
    }
    else {
        printf("Your total percantage is %d and you are pass\n",total);
    }
    return 0;
}