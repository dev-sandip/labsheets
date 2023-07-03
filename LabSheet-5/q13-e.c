// 123454321
//  1234321
//   12321
//    121
//     1
#include <stdio.h>

int main() {
    int rows = 5; // Number of rows in the pyramid

    for (int i = 0; i < rows; i++) {
        // Print spaces
        for (int j = 0; j < i; j++) {
            printf(" ");
        }

        // Print numbers in increasing order
        for (int k = 1; k <= rows - i; k++) {
            printf("%d", k);
        }

        // Print numbers in decreasing order
        for (int l = rows - i - 1; l >= 1; l--) {
            printf("%d", l);
        }

        printf("\n");
    }

    return 0;
}
