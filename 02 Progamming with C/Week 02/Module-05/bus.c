#include<stdio.h>

int main()

{
    int n, w, i;
    int sum;
    printf("Enter the number of passenger:  ");
    scanf("%d", &n);

    for(i=0; i<=n; i++)
    {
        scanf("%d", &w);
        sum += w;
    }
    printf("Total some of weight = %d", sum);
    return 0;
}