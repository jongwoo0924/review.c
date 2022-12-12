#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int i,j,n;
  for(i=1;i<=10;i++)
  {
    for(j=1;j<=i;j++)
    {
      printf("%d \n",j);
      n=i+i;
    }
    printf("\n");
  }
  printf("%d\n",n);
  return 0;
}
