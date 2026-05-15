#include <stdio.h>

int main() {
    int first, second, sum;

    printf("Enter two integers: ");
    // scanf reads input from the user; %d is the format specifier for integers
    scanf("%d %d", &first, &second);

    sum = first + second;

    printf("Sum: %d\n", sum);
    return 0;
}
