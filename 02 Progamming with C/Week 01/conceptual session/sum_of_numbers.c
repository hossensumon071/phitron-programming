#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Enter 3 integer: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("%d \n", a + b + c);

    int sum = a + b + c;

    printf("%d", sum);
}
