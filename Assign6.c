// C Program to Swap Two Numbers

#include <stdio.h>
void main(){
    int num1,num2,temp;
    printf("enter Number 1: ");
    scanf("%d",&num1);
    printf("enter Number 2: ");
    scanf("%d",&num2);

    temp = num2;
    num2 = num1;
    num1 = temp;
    printf("%d,%d",num1,num2);
}