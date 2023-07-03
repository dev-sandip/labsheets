// 5 4 3 2 1
// 5 4 3 2
// 5 4 3
// 5 4
// 5

#include <stdio.h>

int main() {
    int rows = 5; // Number of rows in the pattern

    for (int i = 0; i < rows; i++) {
        int num = rows;
        for (int j = 0; j < rows - i; j++) {
            printf("%d ", num);
            num--;
        }
        printf("\n");
    }

    return 0;
}
