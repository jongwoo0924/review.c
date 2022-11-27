#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int i,j,n;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    for(j=i;j<=n;j++)
    {
      printf("%d ",j);
    }
    printf("\n");
  }
  return 0;
}/*출력 : n==5
1 2 3 4 5
2 3 4 5
3 4 5
4 5
5*/


int main(void)
{
  int i,j,n;
  scanf("%d",&n);
  for(i=n;i>=1;i--)
  {
    for(j=1;j<=i;j++)
    {
      printf("%d ",j);
    }
    printf("\n");
  }
  return 0;
}/*출력 : n==5
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1
*/
