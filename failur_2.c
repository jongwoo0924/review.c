#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n;
	int i,j;
	scanf("%d",&n);
	for(j=1;j<=n;j++)
	{
		printf("%d : ",j);
		for(i=1;i<=j;i++)
		{
			if(n%i==0)
			{
				printf("%d ",i);
			}
		}
		printf("\n");
	}
	
  	return 0;
}
