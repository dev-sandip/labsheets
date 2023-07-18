//  WAP to display sum of series: x + x2/2! + x3/3! + x4/4! + x5/5! ... xn/n!. User defined
// function factorial() and power() should be used to calculate the factorial and power.
#include <stdio.h>

double power(double x, int i) {
    double result = 1.0;
    if (i >= 0) {
        for (int j = 0; j < i; j++) {
            result *= x;
        }
    } else {
        for (int j = 0; j > i; j--) {
            result /= x;
        }
    }
    return result;
}

long factorial(int n) {
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int n;
    int x;
    double sum = 0.0;
    
    printf("Enter the number of elements in the series: ");
    scanf("%d", &n);
    
    printf("Enter the value of x: ");
    scanf("%d", &x);
    
    for (int i = 1; i <= n; i++) {
        sum += power(x, i) / factorial(i);
    }
    
    printf("The sum of the series is %f\n", sum);
    
    return 0;
}





// The `else` case inside the `power` function is used when the exponent is negative. In this case, instead of multiplying the base by itself multiple times, we need to divide the base by itself multiple times to calculate the power.

// Let's say we have the number 2 as the base, and we want to find 2 raised to the power of -3 (written as 2^-3). It means we need to divide 1 by 2 three times: 1 / 2 / 2 / 2 = 0.125. So the answer is 0.125.

// In the `power` function, there are two loops. The first loop is used when the exponent is non-negative (greater than or equal to 0). It multiplies the base by itself `exponent` number of times, just like we discussed earlier.

// The `else` case comes into play when the exponent is negative. In this case, the second loop is executed. It starts with the result of 1 (since any number divided by itself is 1) and divides the base by itself `|exponent|` number of times (the absolute value of the exponent). The absolute value of a negative number is its positive counterpart. For example, the absolute value of -3 is 3.

// Let's say the base is 2 and the exponent is -3. The first loop will not be executed because the exponent is negative. Instead, the second loop will execute three times. In each iteration, it will divide the result (which is initially 1) by 2. After three divisions, the result will be 0.125, which is the answer we want.

// The `else` case handles the scenario where the exponent is negative and performs the necessary calculations using division instead of multiplication.

// I hope this explanation helps you understand the `else` case inside the `power` function!