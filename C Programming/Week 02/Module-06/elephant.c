#include<stdio.h>


int main()
{
int a=5, b=13; 
//Write code here 
printf("before swapped %d and %d\n", a, b);
a = a + b;
b = a - b; 
a = a - b;
    
//End of code 
printf("%d and %d" , a, b); 
}