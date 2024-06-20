#include <stdio.h>
int sum(int n);

int main() {
    int number;

    printf("Enter a positive integer: ");
    scanf("%i", &number);

    int result = sum(number);

    printf("sum = %i", result);
    return 0;
}

int sum(int n) {
    if (n != 0)
        return n + sum(n-1); 
    else
        return n;
}
