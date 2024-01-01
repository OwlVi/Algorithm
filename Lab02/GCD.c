#include <stdio.h>

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int sum(int number) {
    int sum = 0;
    while (number != 0) {
        sum += number % 10;
        number /= 10;
    }
    return sum;
}


int main() {
    int a, b;
    scanf("%d %d", &a, &b);
        for (int i = a; i <= b; i++) {
        int sum_digits = sum(i);
        if (gcd(i, sum_digits) != 1) {
            printf("%d ", i);
        }
    }
    return 0;
}
