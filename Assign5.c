// C Program to Find the Size of int, float, double and char

#include<stdio.h>
void main(){
    int i;
    float f;
    double d;
    char c; 
    printf("\nSize of integer is %d  bytes",sizeof(i));
    printf("\nSize of float is %zu bytes",sizeof(f));
    printf("\nSize of is double is %zu bytes",sizeof(d));
    printf("\nSize of character is %zu bytes",sizeof(c));
}
