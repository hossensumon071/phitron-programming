#include<stdio.h>
int main()
{
  int N=6;
  int ara[N];
  int i;

  for(i=0; i<N; i++)
  {
    scanf("%d", &ara[i]);
  }
  int m = ara[0];

  for(i=0; i<N; i++)
  {
    if(ara[i]>m)
    {
      m = ara[i];
    }
  }
  printf("the maximum value is %d\n", m);
  
  return 0;
}