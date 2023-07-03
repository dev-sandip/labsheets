//WAP to find HCF and LCM of two numbers.
#include <stdio.h>

int main() {
    int num1, num2, hcf, lcm, smaller;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    smaller = (num1 < num2) ? num1 : num2;

    for (hcf = smaller; hcf >= 1; hcf--) {
        if (num1 % hcf == 0 && num2 % hcf == 0) {
            break;
        }
    }

    lcm = (num1 * num2) / hcf;

    printf("HCF: %d\n", hcf);
    printf("LCM: %d\n", lcm);

    return 0;
}
