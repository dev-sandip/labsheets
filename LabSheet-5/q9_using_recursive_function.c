#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}
int main() {
    int n;
int i;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

  
    printf("Fibonacci series up to %d terms:\n", n);

    for (i = 0; i < n; ++i) {
        printf("%d ", fibonacci(i));
    }


    return 0;
}
