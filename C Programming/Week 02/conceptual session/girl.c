#include <stdio.h>

int main()

{
    int n, k, i;
    scanf("%d%d", &n, &k);

    for(i = 1; i<=k; i+= 1)
    {
        int lastDigit = n%10;
        if(lastDigit !=0)
            n-=1;
        else
            n/=10;
    }
    printf("%d\n",n);
    
    return 0;
}