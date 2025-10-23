#include <stdio.h>
int main() {
    int a, b;
    printf("Enter two numbers: ");
    if (scanf("%d %d", &a, &b) != 2) return 1;
    printf("Product = %d\n", a * b);
    return 0;
}
