#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int n;
  scanf("%d",&n);
  while(n>=1)
  {
    if(n%2==0)
    {
      n=n/2;
      printf("%d\n",n);
      continue;
      }
    if(n%2==1)
    {
      n=(n+1)/2;
      printf("%d\n",n);
      continue;
    }
  }
  printf("%d\n",n);
}
