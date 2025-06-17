#include<stdio.h>

int main(){

    int a, b, c;

    printf("Enter First Number a : ");
    scanf("%d", &a);

    printf("Enter Second Number b : ");
    scanf("%d", &b);

    printf("Enter Third Number c : ");
    scanf("%d", &c);

    printf("Average of the three numbers is : %d", (a+b+c)/3);

    return 0;
}