#include<stdio.h>
int main()
{
    // int i;

    // while (i<= 10)
    // {
    //     printf("%d Hello world\n", i);
    //     i += 2;
    // }

    // 3n + 1 proplem 
    int n;
    printf("Enter a number");
    scanf("%d", &n);
    while(n>1)
    {
        printf("--> %d\n", n);
        if(n%2==0)
        {
            n = n/2;
        }
        else 
        {
            n = 3*n + 1;
        }
    }
    printf("--> %d\n", n);

    return 0;
}