#include <stdio.h>
#include <stdlib.h>

/*int main(void) {
  int i,j,n;
  j=1;
  scanf("%d",&n);

  while(j<=n)
  {
    if(j%2==1)
    {
      printf("1 ");
    }
    else
    {
      printf("-1 ");
    }
    j++;
  }
  return 0;
  }*/  //print 1 -1 1 -1 1 -1 1 -1 ''''''


/*int main(void) {
  int i,j,n;
  j=1;
  scanf("%d",&n);

  while(j<=n)
  {
    if(j%2==1)
    {
      printf("1 ");
    }
    else
    {
      printf("0 ");
    }
    j++;
  }
  return 0;
  }*/ // print 1 0 1 0 1 0 1 0 ''''

int main(void) {
  int i,j,n,a;
  j=1;
  scanf("%d",&n);

  while(j<=n)
  {
    if(j%2==1)
    {
      printf("%d",j);
    }
    else
    {
    a=j*-1;
    printf("%d ",a);
    
      }
    j++;
  }
  return 0;
  } //print 1 -2 3 -4 5 ''''
