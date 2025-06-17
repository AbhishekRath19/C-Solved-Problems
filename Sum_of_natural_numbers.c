#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter a positive number: ");
    scanf("%d", &n);

    if(n <= 0) {
        printf("Invalid input \n");
    } else {
        for(int i = 1; i <= n; i++) {
            sum += i;
        }
        printf("Sum of the first %d natural numbers is: %d\n", n, sum);
    }

    return 0;
}