#include <stdio.h>

int main() {
    int n, i, first = 0, second = 1, next;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci series up to %d terms:\n", n);

    if (n >= 1)
        printf("%d ", first);

    if (n >= 2)
        printf("%d ", second);

    for (i = 3; i <= n; ++i) {
        next = first + second;
        printf("%d ", next);
        first = second;
        second = next;
    }

    return 0;
}
