#include <stdio.h>

int main()
{
    int A, B;
    printf("Enter the value of A and B : ");
    scanf("%d %d", &A, &B);

    if (A == B)
        printf("They are equal\n");
    else if (A > B)
        printf("A is Bigger then B");
    else 
        printf("B is bigger then A");

    return 0;
mehedi hasan