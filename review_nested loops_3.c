#include <stdio.h>
#include <stdlib.h>



int main(void)
{
  int a=0;
  int i,j;
  for(i=1;i<=10;i++)
  {
    int n=0;
	for(j=1;j<=i;j++)
    {
      printf("%d \n",j);
      n+=j;
    }
    printf("\n");
    a+=n;
  }
  printf("%d\n",a);
  return 0;
}

