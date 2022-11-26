#include <stdio.h>

int main(void) {
  int j,i,n;
  scanf("%d",&n);
  
  for(i=1;i<=n;i++)
    {
      printf("%d 학년 ",i);
      for(j=1;j<=n;j++)
      {
        printf("%d 반 ",j);
      }
      printf("\n");
    }
  return 0;
}
