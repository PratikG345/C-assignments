// C Program to Check Whether a Number is Even or Odd
#include <stdio.h>
void main(){
    int num1;
    printf("Enter a Number: ");
    scanf("%d",&num1);
    if(num1 % 2 == 0){
        printf("Even");
    }
    else{
        printf("Odd");
    }
}